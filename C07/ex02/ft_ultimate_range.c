/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 10:51:50 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/20 10:52:13 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	i;
	int	*arr_of_nums;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	arr_of_nums = (int *)malloc(sizeof(*arr_of_nums) * diff);
	if (arr_of_nums == NULL)
		return (-1);
	while (min < max)
	{
		arr_of_nums[i] = min;
		min++;
		i++;
	}
	*range = arr_of_nums;
	return (i);
}
/*int main()
{
	int	*range;
	int	i;
	int	max;
	int	min;
	int	diff;

	min = -3;
	max = 18;
	diff = max - min;
	i = 0;	
	ft_ultimate_range(&range, min, max);
	while (diff != 0)
	{
		printf("%d\n", range[i]);
		i++;
		diff--;
	}
	return (0);
}*/
