/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 09:28:51 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/13 09:29:15 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (to_find[0] == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == to_find[0])
		{
			i = 0;
			count = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] == to_find[i])
					count++;
				i++;
			}
			if (count == i)
				return (str);
		}
		str++;
	}
	return (0);
}
