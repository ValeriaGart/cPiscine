/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:09:54 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/15 15:10:21 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	calls_itself(int nb, int *i)
{
	if (nb == 0)
		return (*i);
	if (nb > 0)
	{
		*i *= nb;
		nb = nb - 1;
		calls_itself(nb, i);
		return (*i);
	}
	return (0);
}

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	*i1;

	i = 1;
	i1 = &i;
	if (nb < 0)
		return (0);
	return (calls_itself(nb, i1));
}

/*int	main()
{
	int	fact;
	
	fact = ft_recursive_factorial(9);
	printf("%d",fact);
}*/
