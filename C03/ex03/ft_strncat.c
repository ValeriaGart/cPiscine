/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:49:57 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/13 15:50:03 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	j;

	j = 0;
	a = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[a] != '\0' && a < nb)
	{
		dest[j] = src[a];
		a++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
