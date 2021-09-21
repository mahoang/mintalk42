# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zephyrus <zephyrus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 11:58:57 by zephyrus          #+#    #+#              #
#    Updated: 2021/09/21 11:25:50 by zephyrus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server.c
CLIENT = client.c
SRC = server.c client.c
HEADER = minitalk.h
FLAGS = -Wall -Wextra -Werror
NAME = SERVER CLIENT
SNAME = server
CNAME = client
OBJ = $(SRC:.c=.o)
CC = clang

all : $(NAME)

$(NAME) : $(SERVER) $(CLIENT)
			$(CC) $(FLAGS) -o server $(SERVER)
			$(CC) $(FLAGS) -o client $(CLIENT)

clean :
	@rm -rf $(OBJ)


fclean : clean
	@rm -rf $(SNAME)
	@rm -rf $(CNAME)

re : fclean all

norm :
	@ norminette $(SRC) $(HEADER)


.PHONY : all clean fclean re
