# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samartin <samartin@student.42madrid.es>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 14:33:37 by samartin          #+#    #+#              #
#    Updated: 2024/05/11 11:27:55 by samartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
BASE	:= ft_base.a
LISTS	:= ft_lists.a
CC		:= gcc
AR		:= ar -crs
VPATH	:= lists
CFLAGS	:= -Wall -Wextra -Werror
RM		:= rm -rf
SRC		:= ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_itoa.c \
			ft_itoab.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_realloc.c \
			ft_split.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strtrim.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c 
SRCLSTS	:= ft_lstadd_back.c \
			ft_lstclear.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstremove_if.c \
			ft_lstsize.c \
			ft_lstsort.c \
			ft_bllst_add_back.c \
			ft_bllst_add_front.c \
			ft_bllst_bubsort.c \
			ft_bllst_clear.c \
			ft_bllst_first.c \
			ft_bllst_iter.c \
			ft_bllst_last.c \
			ft_bllst_new.c \
			ft_bllst_remove_node.c \
			ft_bllst_size.c \
			ft_long_compare_fs.c
OBJ		:= ${SRC:.c=.o}
OBJLSTS	:= ${SRCLSTS:.c=.o}

all: ${NAME}

${NAME}: ${OBJ} ${OBJLSTS}
	${AR} ${NAME} $^

${BASE}: ${OBJ}
	${AR} ${BASE} $^

${LISTS}: ${OBJLSTS}
	${AR} ${LISTS} $^

clean:
	${RM} ${OBJ} ${OBJLSTS}

fclean: clean
	${RM} ${NAME} ${BASE} ${LISTS}

re: fclean all

.PHONY:	all clean fclean re bonus