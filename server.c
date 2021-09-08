/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:30 by user42            #+#    #+#             */
/*   Updated: 2021/09/08 13:19:49 by zephyrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	putstr(char c)
{
	write(1, &c, 1);
}

void	receive(int signal)
{
	if (signal == SIGUSR1)
		g_data.c |= 1 << g_data.size;
	g_data.size++;
	if (g_data.size == 8)
	{
		g_data.size = 0;
		if (!g_data.c)
			putstr('\n');
		else
			putstr(g_data.c);
		g_data.c = 0;
	}
}

int	main(void)
{
	int			i;
	sigset_t	ens1;

	i = getpid();
	g_data.c = 0;
	g_data.size = 0;
	printf("PID %i\n", i);
	sigemptyset(&ens1);
	sigaddset(&ens1, SIGUSR1);
	sigaddset(&ens1, SIGUSR2);
	/*struct sigaction act;
	act.sa_mask = ens1;
	act.sa_handler = receive;

	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	*/
	signal(SIGUSR1, receive);
	signal(SIGUSR2, receive);
	while (1)
	{
	}
}
