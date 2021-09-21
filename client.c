/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:35 by user42            #+#    #+#             */
/*   Updated: 2021/09/08 14:51:48 by zephyrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_atoi(const char *str)
{
	long int	c;
	long int	d;
	int			nb;

	c = 0;
	d = 0;
	nb = 0;
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\v'
		|| str[c] == '\f' || str[c] == '\r' || str[c] == ' ')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			d++;
		c++;
	}
	while ('0' <= str[c] && str[c] <= '9')
	{
		nb = nb * 10 + str[c] - '0';
		c++;
	}
	if (d % 2 == 1)
		nb = nb * -1;
	return (nb);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (c)
	{
		while (c[i] != '\0')
		{
			write (1, &c[i], 1);
			i++;
		}
	}
}

int	send_msg(int pid, char msg)
{
	int	i;
	int	bit;

	i = 0;
	while (i < 8)
	{
		bit = (msg >> i) & 1;
		if (bit)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(200);
		i++;
	}
	return (1);
}

/*
**recuperer le message a envoyer
**le convertir en binaire
**send avec kill chaque chara
**sigusr1 sera 1 et sigusr2 sera 0 (ou l'inverse)
**sachant que la reception d'un signal interrompt toute action
**temporiser les signaux a l'aide de sleep/usleep
*/
int	main(int ac, char *av[])
{
	int	pid;
	int	i;

	i = 0;
	if (ac != 3)
	{
		ft_putstr("use with : <./client> <server pid> <txt to send>");
		return (0);
	}
	pid = ft_atoi(av[1]);
	i = 0;
	while (av[2][i])
	{
		send_msg(pid, av[2][i]);
		i++;
	}
	if (av[2][i] == '\0')
		ft_putstr("message sent");
	return (0);
}
