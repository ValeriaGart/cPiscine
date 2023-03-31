/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:40:50 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/08 11:07:18 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_me(int a, int b, int c, int d)
{
	char	a1;
	char	b1;
	char	c1;
	char	d1;

	a1 = a + 48;
	b1 = b + 48;
	c1 = c + 48;
	d1 = d + 48;
	write(1, &a1, 1);
	write(1, &b1, 1);
	write(1, " ", 1);
	write(1, &c1, 1);
	write(1, &d1, 1);
	if (!(a1 == '9' && b1 == '8' && c1 == '9' && d1 == '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_less_than_25_lines(int a, int b, int c, int d)
{
	while (a <= 9)
	{
		while (b <= 9)
		{
			c = a;
			while (c <= 9)
			{
				d = 0;
				if (a == c)
				{
					d = b + 1;
				}				
				while (d <= 9)
				{
					write_me(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		b = 0;
		a++;
	}
}

void	ft_print_comb2(void)
{
	ft_less_than_25_lines(0, 0, 0, 0);
}
