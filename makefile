# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 11:58:57 by zephyrus          #+#    #+#              #
#    Updated: 2021/09/04 16:54:32 by zephyrus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server.c
CLIENT = client.c
SRC = server.c client.c
HEADER = minitalk.h
FLAGS = -Wall -Wextra -Werror
NAME = SERVER CLIENT
CC = clang

all : $(NAME)

$(NAME) : $(SERVER) $(CLIENT)
			$(CC) $(FLAGS) -o server $(SERVER)
			$(CC) $(FLAGS) -o client $(CLIENT)

clean : rm -rf *.o

fclean : clean
		rm -f server
		rm -f client

re : fclean all

norm :
	@ norminette $(SRC) $(HEADER)


.PHONY : all clean fclean re
