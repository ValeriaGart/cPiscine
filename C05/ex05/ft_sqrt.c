/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 20:43:27 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/15 21:17:17 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_sqr(int nb, int a)
{
	if (nb > 2147395600)
		return (0);
	if (a * a == nb)
		return (a);
	if (a * a < nb)
		return (check_sqr(nb, a + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (check_sqr (nb, 0));
}
/*int	main()
{
	int	x;

	x = ft_sqrt(9);
	printf("%d", x);
	return (0);
}*/
