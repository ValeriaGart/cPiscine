/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:22:08 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/12 10:51:48 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	condition_in_condition(char *str, char *b, int j)
{
	if (str[j] < 16)
	{
		*b = '0';
	}
	else if (str[j] < 32)
	{
		*b = '1';
	}
	else if (str[j] == 127)
	{
		*b = '7';
	}
}

void	condition(char *str, int j, char *b)
{
	int		v;
	int		l;
	char	c;

	v = str[j];
	l = v % 16;
	v = v / 16;
	if (l < 10)
	{
		c = '0' + l;
	}
	else
	{
		c = 'a' + (l - 10);
	}
	condition_in_condition(str, b, j);
	str[j] = c;
}

void	ft_putstr_non_printable(char *str)
{
	int		j;
	char	b;
	char	a;
	char	*b1;

	j = 0;
	b = '0';
	b1 = &b;
	while (str[j] != '\0')
	{
		if (str[j] < 32 || str[j] == 127)
		{
			condition(str, j, b1);
			write(1, "\\", 1);
			write(1, &b, 1);
		}
		a = str[j];
		write(1, &a, 1);
		j++;
	}
}
