/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:58:01 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/18 23:37:25 by xgossing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int		ft_strstr(char *haystack, char *needle);
int		my_atoi(char *src);
int		throw_error(char *msg);
void	ft_putstr(char *str);
void	convert_input(char *src, char *dict);

int	main(int ac, char **av)
{
	if (ac < 2 || ac > 3)
		return (throw_error("Error"));
	if (ac == 3)
		convert_input(av[2], av[1]);
	else
		convert_input(av[1], "./dicts/numbers.dict");
	return (0);
}
