/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:30 by user42            #+#    #+#             */
/*   Updated: 2021/07/24 12:08:05 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(char c)
{
	if (c)
		write(1, &c, 1);
}

int	ft_putnbr(long nb)
{
	char	c;
	int		ret;

	ret = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		ret++;
		nb = -nb;
	}
	if (nb / 10 > 0)
		ret += ft_putnbr(nb / 10);
	c = nb % 10 + 48;
	write(1, &c, 1);
	ret++;
	return (ret);
}

void	receive(int signal)
{
	if (signal == SIGUSR1)
		g_data.c |= 1 << g_data.size;
	g_data.size++;
	if (g_data.size == 8)
	{
		g_data.size = 0;
		if (g_data.c)
			ft_putchar(g_data.c);
		else
			ft_putchar('\n');
		g_data.c = 0;
	}
}

/*
**
**sigemptyset and sigaddset doesn't have to be used with signal,
**they have to be for sigaction though.
**
*/
int	main(void)
{
	int			i;

	i = getpid();
	g_data.c = 0;
	g_data.size = 0;
	ft_putnbr(i);
	signal(SIGUSR1, receive);
	signal(SIGUSR2, receive);
	while (1)
	{
	}
	return (0);
}
