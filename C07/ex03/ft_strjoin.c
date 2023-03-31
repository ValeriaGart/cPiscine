/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:58:16 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/20 13:58:59 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	length(char *a)
{
	int	len;

	len = 0;
	while (a[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	j;

	j = 0;
	a = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[a] != '\0')
	{
		dest[j] = src[a];
		a++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

void	do_while(int size, char *arr, char **strs, char *sep)
{
	int	i;

	i = 0;
	while (size != 0)
	{
		size--;
		ft_strcat(arr, strs[i]);
		if (size != 0)
			ft_strcat(arr, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*arr;

	i = 0;
	len = 0;
	if (size <= 0)
	{
		arr = (char *)malloc(1);
		return (arr);
	}
	while (i != size)
	{
		len = length(strs[i]) + len;
		i++;
	}
	len = len + length(sep);
	arr = (char *)malloc(sizeof(char *) * len);
	if (arr == 0)
		return (0);
	do_while(size, arr, strs, sep);
	return (arr);
}

/*int	main(int argc, char **argv)
{
	char	sep[] = "\n";
	
	printf("%s", ft_strjoin(argc, argv, sep));
	return (0);
}*/
