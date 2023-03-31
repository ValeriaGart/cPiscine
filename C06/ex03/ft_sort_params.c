/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:54:14 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/16 12:23:07 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

void	ft_sort_params(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		put_char(str[i]);
		i++;
	}
	write (1, "\n", 1);
}

int	comp(char *s1, char *s2)
{
	unsigned int	j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0' && s1[j] == s2[j])
	{
		j++;
	}
	return (s1[j] - s2[j]);
}

void	ft_sort_int_tab(char **argv, int argc)
{
	int		i;
	int		size;
	char	*a;

	i = 1;
	while (i < argc)
	{
		size = 1;
		while (size < argc)
		{
			if (comp(argv[i], argv[size]) < 0)
			{
				a = argv[i];
				argv[i] = argv[size];
				argv[size] = a;
			}
			size++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	size;

	i = 1;
	size = argc;
	if (argc <= 1)
		return (0);
	ft_sort_int_tab(argv, size);
	i = 1;
	while (argv[i])
	{
		ft_sort_params(argv[i]);
		i++;
	}
	return (0);
}
