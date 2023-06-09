/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:39:13 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/12 20:40:38 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
