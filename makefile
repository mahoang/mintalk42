# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahoang <mahoang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/17 11:58:57 by zephyrus          #+#    #+#              #
#    Updated: 2021/07/24 11:58:41 by mahoang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server.c
CLIENT = client.c
SNAME = server
CNAME = client
FLAGS = -Wall -Wextra -Werror
NAME = SERVER CLIENT
OBJ = $(SRC:.c=.o)
CC = clang
all : $(NAME)
$(NAME) : $(SERVER) $(CLIENT)
			$(CC) $(FLAGS) -o server $(SERVER)
			$(CC) $(FLAGS) -o client $(CLIENT)

clean : rm -rf $(OBJ)

fclean :
		rm -f $(SNAME)
		rm -f $(CNAME)

re : fclean all

.PHONY : all clean fclean re
