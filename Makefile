# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 14:23:14 by samartin          #+#    #+#              #
#    Updated: 2024/05/19 19:57:33 by samartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= pipex
CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
RM			:= rm -rf
SRC			:=	pipex.c \
				pipex_cleaning.c \
				pipex_exec.c \
				pipex_prompt_parse.c
OBJ			:= ${SRC:.c=.o}
LIBFT_DIR	:= libft/
LIBFT		:= libft.a


all: ${NAME}

${LIBFT}: ${LIBFT_OBJ}
	@make -C ${LIBFT_DIR}

${NAME}: ${LIBFT} ${OBJ}
	${CC} ${CFLAGS} ${OBJ} ${LIBFT_DIR}${LIBFT} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re