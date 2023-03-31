/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vharkush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:47:23 by vharkush          #+#    #+#             */
/*   Updated: 2022/09/15 09:47:56 by vharkush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (a == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_sign(char *str, int *i)
{
	int	sign;

	sign = 1;
	while (str[*i] == ' ' || str[*i] == '\r' || str[*i] == '\n'
		|| str[*i] == '\f' || str[*i] == '\t' || str[*i] == '\v')
	{
		*i++;
	}
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
		{
			sign *= -1;
		}
		*i = *i + 1;
	}
	return (sign);
}

int	precondition(char *base)
{
	int	a;
	int	j;

	a = 0;
	while (base[a])
	{
		j = 0;
		while (base[j])
		{
			if (base[a] == base[j] && a != j)
				return (0);
			j++;
		}
		a++;
	}
	a = 0;
	while (base[a])
	{
		if (base[a] == ' ' || base[a] == '\f' || base[a] == '\v'
			|| base[a] == '\r' || base[a] == '\t' || base[a] == '\n'
			|| base[a] == '-' || base[a] == '+')
			return (0);
		a++;
	}
	return (a);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	num;
	int	i;
	int	cond;
	int	length;

	i = 0;
	num = 0;
	length = 0;
	sign = 0;
	length = precondition(base);
	if (length > 1)
	{
		sign = ft_sign(str, &i);
		cond = check_base(str[i], base);
		while (cond != -1)
		{
			num = (num * length) + cond;
			i++;
			cond = check_base(str[i], base);
		}
		num = num * sign;
		return (num);
	}
	return (0);
}
