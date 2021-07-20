/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:30 by user42            #+#    #+#             */
/*   Updated: 2021/07/21 00:36:19 by zephyrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"



/*
creer signal avec sigemptyset int sigemptyset(sigset_t *set); qui l'initialise
faire sigaddset(sigset_t *set , int signum) add signal signum from set
faire signal sighandler_t signal(int signum, sighandler_t handler) pour lui donner un ordre



*/

void putstr(char c)
{
	write(1, &c, 1);
}


void	handler(int signal) /*todo transform msg into bits for converting into char*/
{
	/*write(1, "Hello", 5);*/
	static int count = 30;
	if (signal == SIGUSR1)
	{
		count++;
		write(1, "1", 1);

	}
	if (signal == SIGUSR2)
	{
		count = 0;
	}
	write(1, &count, 1);

}

void	receive(int signal)
{
	if (signal == SIGUSR2)
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
int main()
{
	int i = getpid();
	int count;

	g_data.c = 0;
	g_data.size = 0;

	printf("PID %i\n", i);
	sigset_t	ens1;
	sigemptyset(&ens1);
	sigaddset(&ens1, SIGUSR1);
	sigaddset(&ens1, SIGUSR2);
	struct sigaction act;
	act.sa_mask = ens1;
	act.sa_handler = receive;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);

	while(1)
	{
	}
}
