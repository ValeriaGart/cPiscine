# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vharkush <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 13:57:37 by vharkush          #+#    #+#              #
#    Updated: 2022/09/22 13:57:43 by vharkush         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wextra -Werror -Wall -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c t_strcmp.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o t_strcmp.o
ranlib libft.a
