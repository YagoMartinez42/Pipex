# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 14:23:14 by samartin          #+#    #+#              #
#    Updated: 2024/05/11 12:17:05 by samartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= pipex
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror
RM		:= rm -rf
SRC		:=	pipex.c \
			pipex_exec.c \
			pipex_prompt_parse.c
OBJ		:= ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re