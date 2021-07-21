/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:35 by user42            #+#    #+#             */
/*   Updated: 2021/07/21 15:39:39 by zephyrus         ###   ########.fr       */
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
/*
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
*/
int	send_msg(int pid, char msg)
{
	int i;
	int bit;

	i = 0;
	while (i < 8)
	{
		bit = (msg >> i) & 1;
		//printf("%i bit \n", bit);
		if (bit)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(150);
		i++;
	}
	return (1);
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
	printf("%i", j);
	char j = 't';
	int k0;
	int k1;
	int k2;
	int k3;
	int k4;
	int k5;
	int k6;
	int k7;
	k0 = j >> 0 & 1;
	k1 = j >> 1 & 1;
	k2 = j >> 2 & 1;
	k3 = j >> 3 & 1;
	k4 = j >> 4 & 1;
	k5 = j >> 5 & 1;
	k6 = j >> 6 & 1;
	k7 = j >> 7 & 1;
	printf("k0 %i\nk1 %i \nk2 %i \nk3 %i \nk4 %i\nk5 %i \nk6 %i \nk7 %i \n", k0, k1, k2, k3, k4, k5, k6, k7);

	int k00;
	int k11;
	int k22;
	int k33;
	int k44;
	int k55;
	int k66;
	int k77;
	k00 = j << 0 / 1;
	k11 = j << 1 / 1;
	k22 = j << 2 / 1;
	k33 = j << 3 / 1;
	k44 = j << 4 / 1;
	k55 = j << 5 / 1;
	k66 = j << 6 / 1;
	k77 = j << 7 / 1;
	printf("k00 %i\nk11 %i \nk22 %i \nk33 %i \nk44 %i\nk55 %i \nk66 %i \nk77 %i \n", k00, k11, k22, k33, k44, k55, k66, k77);
	*/
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
