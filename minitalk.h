/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:00:45 by user42            #+#    #+#             */
/*   Updated: 2021/07/17 11:45:58 by zephyrus         ###   ########.fr       */
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

int	ft_atoi(const char *str);

#endif
