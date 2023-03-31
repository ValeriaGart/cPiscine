/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvaisman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 09:59:55 by dvaisman          #+#    #+#             */
/*   Updated: 2022/09/04 16:49:42 by jrafanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_message(void)
{
	write(1, "Error: x or y is negative\n", 26);
}

void	write_letter(int row, int col, int lrow, int lcol)
{
	if ((row == 0 && col == 0) || (row == 0 && col == lcol))
	{
		ft_putchar('o');
	}
	else if ((row == lrow && col == 0) || (row == lrow && col == lcol))
	{
		ft_putchar('o');
	}
	else if (row == 0 || row == lrow)
	{
		ft_putchar('-');
	}
	else if (col == 0 || col == lcol)
	{
		ft_putchar('|');
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
				write_letter(row, col, y - 1, x - 1);
				col++;
			}
			ft_putchar('\n');
			col = 0;
			row++;
		}
	}
}
