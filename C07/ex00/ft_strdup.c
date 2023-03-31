/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:16:14 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/19 12:18:20 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ret_str;

	i = 0;
	while (src[i])
		i++;
	ret_str = malloc(sizeof(src) * i);
	if (ret_str == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		ret_str[i] = src[i];
		i++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}
/*int main()
{
    char original[12] = "hi there!";
    char *duplicate;

    duplicate = ft_strdup(original);
    printf("Original String: '%s' \n",
            original);
    printf("Duplicate string: '%s' \n",
            duplicate);

    return(0);
}*/
