/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:30 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 14:01:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"



/*
creer signal avec sigemptyset int sigemptyset(sigset_t *set); qui l'initialise
faire sigaddset(sigset_t *set , int signum) add signal signum from set
faire signal sighandler_t signal(int signum, sighandler_t handler) pour lui donner un ordre



*/

struct sigse_s
{

};

void	handler(int signal)
{
	write(1, "Hello", 5);
}
int main()
{
	int i = getpid();
	// write(1, "PID :",6 );
	printf("PID %i\n", i);
	sigset_t	ens1;
	sigemptyset(&ens1);
	sigaddset(&ens1, SIGUSR1);
	sigaddset(&ens1, SIGUSR2);
	struct sigaction act;
	act.sa_mask = ens1;
	act.sa_handler = handler;
	sigaction(SIGUSR1, &act, NULL);
	while(1)
	{

	}
}
