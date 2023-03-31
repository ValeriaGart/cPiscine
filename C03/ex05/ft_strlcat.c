/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:45:29 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/13 18:45:58 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	j;
	unsigned int	lsrc;
	unsigned int	ldest;

	j = length(dest);
	a = 0;
	ldest = length(dest);
	lsrc = length(src);
	if (size < 1)
		return (lsrc + size);
	while (src[a] != '\0' && j < size - 1)
	{
		dest[j] = src[a];
		a++;
		j++;
	}
	dest[j] = '\0';
	if (size < ldest)
		return (lsrc + size);
	return (ldest + lsrc);
}
int main(void)
{
    char arr[50] = "hi, ";
    char arr1[] = {"i'm Lia"};
    char *dest;
    char *src;
    int j;

    j = 0;
    src = &arr1[0];
    dest = &arr[0];
    ft_strlcat(dest, src, 6);
    while (dest[j])
	{
	    printf("%c",dest[j]);
		j++;
	}
	return (0);
}
