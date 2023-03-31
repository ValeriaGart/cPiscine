/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:41:29 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/07 20:28:47 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int n, int *toarr)
{
	char	b;
	int		i;

	i = 0;
	while (i < n)
	{
		b = toarr[i] + 48;
		write(1, &b, 1);
		i++;
	}
	if (toarr[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	check_cond(int *toarr, int *pcondition, int n)
{
	int	i;

	*pcondition = 0;
	i = 0;
	while (i < n - 1)
	{
		if (toarr[i] < toarr[i + 1])
		{
			++*pcondition;
		}
		i++;
	}
	if (*pcondition == n - 1)
	{
		print(n, toarr);
	}
}

void	after_cond(int *toarr, int n)
{
	int	i;

	toarr[n - 1] = toarr[n - 1] + 1;
	i = n - 1;
	while (i > 0)
	{
		if (toarr[i] == 10)
		{
			toarr[i - 1] = toarr[i - 1] + 1;
			toarr[i] = 0;
		}
		i--;
	}
}

void	ft_print_combn(int n)
{
	int	end;
	int	arr[11];
	int	condition;
	int	*toarr;
	int	*pcondition;

	condition = 0;
	end = -1;
	pcondition = &condition;
	while (end++ < n)
		arr[end] = end;
	end = 0;
	toarr = &arr[0];
	while (end == 0)
	{
		check_cond(toarr, pcondition, n);
		if (toarr[n - 1] - toarr[0] == n - 2 || n == 1)
		{
			if (arr[n - 1] == 9)
				end = end + 1;
		}
		after_cond(toarr, n);
	}
}
