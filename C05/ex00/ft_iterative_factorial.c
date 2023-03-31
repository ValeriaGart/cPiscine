/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:36:38 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/15 15:08:11 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;
	int	i;

	num = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		num = num * i;
	}
	return (num);
}

/*int	main()
{
	int	fact;
	
	fact = ft_iterative_factorial(9);
	printf("%d",fact);
}*/
