/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:29:06 by mahoang           #+#    #+#             */
/*   Updated: 2021/07/24 11:19:29 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/*
	help watching for bits
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

	/*
	**for sigaction | clang
	sigset_t	ens1;
	sigemptyset(&ens1);
	sigaddset(&ens1, SIGUSR1);
	sigaddset(&ens1, SIGUSR2);
	struct sigaction act;
	act.sa_mask = ens1;
	act.sa_handler = receive;

	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	*/
