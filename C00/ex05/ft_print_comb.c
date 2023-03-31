/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:23:05 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/08 11:05:15 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_f(int a, int b, int c)
{
	char	a1;
	char	b1;
	char	c1;

	a = a + 48;
	b = b + 48;
	c = c + 48;
	a1 = a;
	b1 = b;
	c1 = c;
	write(1, &a1, 1);
	write(1, &b1, 1);
	write(1, &c1, 1);
	if (a != 55)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				if (a != b && a != c && c != b && b < c && a < b)
				{
					write_f(a, b, c);
				}
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}
