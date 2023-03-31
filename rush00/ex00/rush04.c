/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 17:31:17 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/04 17:26:31 by dvaisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_message(void)
{
	write(1, "Error: x or y is negative\n", 26);
}

void	write_l(int col, int row, int lcol, int lrow)
{
	if (row == 0 && col == 0)
	{
		ft_putchar('A');
	}
	else if (row == lrow - 1 && col == 0)
	{
		ft_putchar('C');
	}
	else if (row == 0 && col == lcol - 1)
	{
		ft_putchar('C');
	}
	else if (row == lrow - 1 && col == lcol - 1)
	{
		ft_putchar('A');
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
	int	col;
	int	row;

	col = 0;
	row = 0;
	if (x < 0 || y < 0)
	{
		error_message();
	}
	while (row < y)
	{
		while (col < x)
		{
			write_l(col, row, x, y);
			col++;
		}
		ft_putchar('\n');
		col = 0;
		row++;
	}
}
