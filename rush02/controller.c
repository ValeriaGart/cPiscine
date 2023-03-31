/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:21:49 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/18 23:36:04 by xgossing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strstr2(char *str, int num, char *arr, int	*a);
int		throw_error(char *msg);
long int	my_atoi(char *str);
char	*read_file(char *path);
void	ft_putstr(char *str);
void	ft_putstr(char *str);

char	*ft_hundreds(char *input, char *dictionary, int digg)
{
	int		a;
	int		dig;
	long int		n;
	int		div;
	int		mod;
	char	*arr1;

	arr1 = malloc(256 * sizeof(char));
	a = 0;
	dig = 0;
	n = my_atoi(input);
	while (input[dig])
		dig++;
	div = (n / 10);
	mod = (n % 10);
	while (dig != 0)
	{
		if (dig % 3 == 0)
		{
			if (input[0] != '0')
			{
				ft_strstr2(dictionary, div / 10, arr1, &a);
				ft_strstr2(dictionary, 28, arr1, &a);
			}
			dig--;
		}
		if (dig % 3 == 2)
		{
			if (div % 10 == 1 && mod == 0)
				ft_strstr2 (dictionary, 10, arr1 ,&a);
			else if (div % 10 > 1)
				ft_strstr2(dictionary, 20 + (div % 10 - 2), arr1, &a);
			dig--;
		}
		if (dig % 3 == 1)
		{
			if (mod != 0)
			{
				if (div % 10 == 1)
					ft_strstr2(dictionary, mod + 10, arr1 ,&a);
				if (div % 10 != 1)
					ft_strstr2(dictionary, mod, arr1, &a);
			}
			dig--;
		}
	}
	if (digg < 3)
		arr1[a - 1] = '\n';
	arr1[a] = '\0';
	return (arr1);
}
void	condition(int dig, int mod, char *argv, char *str)
{
	char	arr_for_print[3];
	int	a;
	int	i;
	char	*arr_ptr;
	
	i = 0;
	a = 0;
	while (dig > 0)
	{
		if (mod != 0)
		{
			while (dig % 3 != i)
			{
				arr_for_print[i] = argv[i];
				i++;
			}
			dig = dig - (dig % 3);
			mod -= mod;
		}
		else
		{
			a = 0;
			while (a != 3)
			{
				arr_for_print[a] = argv[i];
				i++;
				a++;
			}
			dig = dig - 3;
		}
		arr_ptr = ft_hundreds(arr_for_print, str, dig);
		ft_putstr(arr_ptr);
		if (dig == 9)
			write(1, "billion ", 8);
		else if (dig == 6)
			write(1, "million ", 8);
		else if (dig == 3)
			write(1, "thousand ", 9);
	}
	free(arr_ptr);
}

void	convert_input(char *src, char *dict)
{
	int		dig;
	int		mod;
	char	*str;

	str = read_file(dict);
	if (src[0] == '-')
	{
		dig = 0;
		write(1, "minus ", 6);
		while (src[dig] != '\0')
		{
			src[dig] = src[dig + 1];
			dig++;
		}
		src[dig] = '\0';
	}
	dig = 0;
	while (src[dig])
	{
		dig++;
	}
	mod = dig % 3;
	if (my_atoi(src) > 4294967295)
	{
		write(1, "Error\n", 6);
		return;
	}
	if (src[0] == '0')
		write(1, "zero\n", 5);
	condition(dig, mod, src, str);
}
