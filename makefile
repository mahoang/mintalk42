# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 11:58:57 by zephyrus          #+#    #+#              #
#    Updated: 2021/07/21 00:52:23 by zephyrus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server.c
CLIENT = client.c
FLAGS = -Wall -Wextra -Werror
NAME = SERVER CLIENT

all : $(NAME)
$(NAME) : $(SERVER) $(CLIENT)
			clang $(FLAGS) -o server $(SERVER)
			clang $(FLAGS) -o client $(CLIENT)

clean : rm -rf *.o

fclean : clean
		rm -f server
		rm -f client

re : fclean all

