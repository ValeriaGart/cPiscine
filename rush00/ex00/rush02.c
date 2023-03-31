/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:47:06 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/06 11:37:47 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_message(void)
{
	write(1, "Error: x or y is negative\n", 26);
}

void	write_l(int row, int col, int lrow, int lcol)
{
	if ((row == 0 && col == 0) || (row == 0 && col == lcol - 1))
	{
		ft_putchar('A');
	}
	else if (row == lrow - 1 && col == 0)
	{
		ft_putchar('C');
	}
	else if (row == lrow - 1 && col == lcol - 1)
	{
		ft_putchar('C');
	}
	else if (row == 0 || row == lrow - 1 || col == 0 || col == lcol - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	if (x < 0 || y < 0)
	{	
		error_message();
	}
	else
	{
		while (row < y)
		{
			while (col < x)
			{
				write_l(row, col, y, x);
				col++;
				row = 6;
			}
			ft_putchar('\n');
			col = 0;
			row++;
		}
	}
}
