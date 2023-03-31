/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:12:41 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/12 11:06:42 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_while(int i, char *str)
{
	int	j;

	j = i + 2;
	while ((str[j] >= 'a' && str[j] <= 'z')
		|| (str[j] >= 'A' && str[j] <= 'Z')
		|| (str[j] >= '0' && str[j] <= '9'))
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] = str[j] + 32;
		j++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i + 1] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			if (str[i] < '0' || str[i] > '9')
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
				check_while(i, str);
			}
		}
		i++;
	}
	return (str);
}
