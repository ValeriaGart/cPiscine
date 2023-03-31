/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:03:17 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/15 17:57:45 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	powering(int nb, int power, int *count)
{
	*count *= nb;
	power--;
	if (power != 1)
		powering(nb, power, count);
	return (*count);
}

int	ft_recursive_power(int nb, int power)
{
	int	res;
	int	yo;
	int	*count;

	yo = nb;
	count = &yo;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	res = powering(nb, power, count);
	return (res);
}
/*int	main()
{
	int	fact;

	fact = ft_recursive_power(2, -9);
	printf("%d",fact);
}*/
