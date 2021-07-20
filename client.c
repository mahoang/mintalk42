/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:35 by user42            #+#    #+#             */
/*   Updated: 2021/07/21 00:51:53 by zephyrus         ###   ########.fr       */
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
	while (str[c] == '\t' || str[c] == '\n' || str[c] == '\v' ||
	str[c] == '\f' || str[c] == '\r' || str[c] == ' ')
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

int	asctobin(int asc)
{
	int i;
	int left;
	int res;

	i = 1;
	res = 0;
	while (asc > 0)
	{
		left = asc % 2;
		res += (left * i);
		asc = asc / 2;
		i = i *10;
	}
	return (res);
}

int	send_msg(int pid, char msg)
{
	int i;
	int bit;

	i = 0;
	while (i < 8)
	{
		bit = (msg >> i) & 1;
		if (bit)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(150);
		i++;
	}
	return (1);
}

int	ascsize(char *msg)
{
	int i;

	i = 0;

}

int main(int ac, char *av[])
{
	int pid;

	if (ac != 3)
	{
		printf("use with = %s <server pid> <txt to send>", av[0]);
		return (0);
	}
	pid = ft_atoi(av[1]);

	int i = 0;
	/*
	int j;

	j = asctobin(i);
	printf("%i", j);*/
	while (av[2][i])
	{
		send_msg(pid, av[2][i]);
		i++;
	}
	return (0);
}


/*
recuperer le message a envoyer
le convertir en binaire
envoyer avec kill chaque character sachant que sigusr1 sera 1 et sigusr2 sera 0 (ou l'inverse)
sachant que la reception d'un signal interrompt toute action, du coup ce qui se passe c'est qu'il faut temporiser les signaux a l'aide de sleep/usleep (plutot usleep testons[100] d'abord)



*/
