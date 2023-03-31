/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 11:41:08 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/12 11:45:41 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	j;
	int	count;

	j = 0;
	count = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] == s2[j])
			count++;
		if (s1[j] > s2[j])
		{
			return (1);
		}
		else if (s1[j] < s2[j])
		{
			return (-1);
		}
		j++;
	}
	if (s1[j] == '\0' && s2[j] != '\0')
		return (-1);
	if (s1[j] != '\0' && s2[j] == '\0')
		return (1);
	return (0);
}