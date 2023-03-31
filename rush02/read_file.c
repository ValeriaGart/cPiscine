/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xgossing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 23:29:49 by xgossing          #+#    #+#             */
/*   Updated: 2022/09/18 23:31:00 by xgossing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_strstr(char *str1, char *str2);

char	**make_array(char *src)
{
	int		i;
	int		j;
	int		k;
	int		lines;
	char	**out;

	i = 0;
	lines = 0;
	while (src[i])
	{
		if (src[i] == '\n')
			lines++;
		i++;
	}
	i = 0;
	out = malloc(lines * sizeof(char *) + 1);
	while (i <= lines)
	{
		out[i] = malloc(sizeof(char) * 64);
		i++;
	}
	i = 0;
	j = 0;
	k = 0;
	while (src[i])
	{
		if (src[i] == '\n')
		{
			out[j][k] = '\0';
			i++;
			j++;
			k = 0;
		}
		if (src[i] == '\0')
			break ;
		out[j][k] = src[i];
		i++;
		k++;
	}
	i = 0;
	return (out);
}
/*
char	**read_file_arr(char *src)
{
	char	*dest;
	int	fd;
	char	**values;

	dest = malloc(8192);
	fd = open(src, O_RDONLY);
	read(fd, dest, 1000);
	values = make_array(dest);
	return(values);
}
*/

char	*read_file(char *src)
{
	char	*dest;
	int		fd;

	dest = malloc(8192);
	fd = open(src, O_RDONLY);
	read(fd, dest, 1000);
	return (dest);
}
