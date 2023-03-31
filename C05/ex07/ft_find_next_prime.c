/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:46:29 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/19 11:54:25 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_pirime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1 || nb > 2147483647)
		return (0);
	while (i <= nb - i)
	{
		if (nb % i == 0)
		{
			i = 1;
			nb++;
		}
		i++;
	}
	return (nb);
}
/*int	main()
{
	printf("%d",ft_find_next_pirime(8));
	return (0);
}*/
