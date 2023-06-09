/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:44:25 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/19 10:58:35 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	i = 2;
	n = nb;
	if (nb <= 1 || nb > 2147483647)
		return (0);
	while (i <= n - i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int	main()
{
	printf("%d",ft_is_prime(2147483647));
	return (0);
}*/
