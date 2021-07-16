/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:00:45 by user42            #+#    #+#             */
/*   Updated: 2021/07/16 13:54:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
#define MINITALK_H

#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>


typedef struct s_msg
{
	char c;
	size_t	size;
}			t_msg;
#endif
