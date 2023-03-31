/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgossing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:04:14 by xgossing          #+#    #+#             */
/*   Updated: 2022/09/18 23:04:14 by xgossing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	throw_error(char *msg)
{
	ft_putstr(msg);
	ft_putstr("\n");
	return (1);
}

char	*ft_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			k = i;
			while (needle[j] && needle[j] == haystack[k])
			{
				k++;
				j++;
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strstr2(char *str, int num, char *arr, int	*a)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			n++;
		if (n == num)
		{
			i++;
			n = 1;
			while (n != 11)
			{
				while (str[i] <= 'z' && str[i] >= 'a')
				{
					arr[*a] = str[i];
					*a += 1;
					i++;
				}
				if (str[i] == '\n')
				{
					arr[*a] = ' ';
					*a += 1;
					return (0);
				}
				i++;
				n++;
			}
		}
		i++;
	}
	return (0);
}

long int	my_atoi(char *str)
{
	long int	sign;
	long int	j;
	long int	i;

	i = 0;
	j = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\t'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\f')
	{
		i++;
	}
	while ((str[i] == '+' || str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		j = j * 10 + (str[i] - '0');
		i++;
	}
	return (sign * j);
}
