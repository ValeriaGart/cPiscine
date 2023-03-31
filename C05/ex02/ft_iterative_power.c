/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:16:05 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/15 17:02:32 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	power--;
	while (power != 0)
	{
		num = num * nb;
		power--;
	}
	return (num);
}
/*int	main()
{
	int	fact;

	fact = ft_iterative_power(6, -4);
	printf("%d",fact);
}*/
