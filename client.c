/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:03:35 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 11:19:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main()
{
	int i;

	i = getpid();

	printf("%i", i);
}
/*
recuperer le message a envoyer
le convertir en binaire
envoyer avec kill chaque character sachant que sigusr1 sera 1 et sigusr2 sera 0 (ou l'inverse)
sachant que la reception d'un signal interrompt toute action, du coup ce qui se passe c'est qu'il faut temporiser les signaux a l'aide de sleep/usleep (plutot usleep testons[100] d'abord)



*/
