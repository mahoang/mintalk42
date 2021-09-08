/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:06 by mahoang           #+#    #+#             */
/*   Updated: 2021/09/04 16:53:24 by zephyrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
/*
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
*/

/*
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
*/
