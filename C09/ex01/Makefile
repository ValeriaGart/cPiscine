# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharkush <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 21:41:26 by vharkush          #+#    #+#              #
#    Updated: 2022/09/22 21:41:33 by vharkush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES  = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS_POINTER = ${addprefix ${POINTED_SRC}, ${SRC_FILES}}

OBJS = = ${SRCS:.c=.o}

POINTED_SRC = ./srcs/

HEADER = ./includes/

NAME = libft.a

AR = ar rc

REMOVE = rm -f

CC = gcc

CFLAGS = -Wextra -Werror -Wall

LIB = ranlib

all: ${NAME}

${NAME}: ${OBJS}
		${AR} ${OBJS} ${LIB}
		${NAME}

.c.o:
		${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

clean:
		rm -f ${OBJS}

fclean: clean
		rm -f ${NAME}

re: fclean all

.DONE: all clean fclean re
