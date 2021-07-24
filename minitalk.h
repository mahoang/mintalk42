/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 16:00:45 by user42            #+#    #+#             */
/*   Updated: 2021/07/24 11:13:15 by mahoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>

typedef struct s_msg
{
	char	c;
	size_t	size;
}			t_msg;

t_msg		g_data;

int	ft_atoi(const char *str);

#endif
