/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:26:07 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/14 15:26:09 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create sign, result, index variable - done
// Check if after spaces r signs and after them nums -done
// Check the sign of num - done
// Update result variable like : res = res*10 + str[i] - '0'; - done
// Return sign * result - done

int	ft_atoi(char *str)
{
	int	sign;
	int	j;
	int	i;

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
