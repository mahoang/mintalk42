/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:35 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 14:47:24 by zephyrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
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

int	ascsize(char *msg)
{
	int i;

	i = 0;
	
}
int main(int ac, char *av[])
{
	int pid;
/*
	if (ac != 3)
	{
		printf("use with = %s <server pid> <txt to send>", av[0]);
		return (0);
	}
	pid = ft_atoi(av[1]);*/

}
/*
recuperer le message a envoyer
le convertir en binaire
envoyer avec kill chaque character sachant que sigusr1 sera 1 et sigusr2 sera 0 (ou l'inverse)
sachant que la reception d'un signal interrompt toute action, du coup ce qui se passe c'est qu'il faut temporiser les signaux a l'aide de sleep/usleep (plutot usleep testons[100] d'abord)



*/
