/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 21:14:42 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/19 21:15:10 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	i;
	int	*arr_of_nums;

	i = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	arr_of_nums = (int *)malloc(sizeof(int) * diff);
	if (arr_of_nums == NULL)
		return (NULL);
	while (min < max)
	{
		arr_of_nums[i] = min;
		min++;
		i++;
	}
	return (arr_of_nums);
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
	range = ft_range(min, max);
	
	while (diff != 0)
	{
		printf("%d", range[i]);
		i++;
		diff--;
	}
	return (0);
}*/
