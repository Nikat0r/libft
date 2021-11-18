/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:11:56 by ababa             #+#    #+#             */
/*   Updated: 2021/11/15 20:37:21 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	calculations(const char *str, int i, int sign)
{
	long	temp;
	long	result;

	temp = 0;
	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		if (temp != (result / 10))
		{
			if (sign == 1)
				return (-1);
			if (sign == -1)
				return (0);
		}
		temp = result;
		i++;
	}
	return (result * sign);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}	
	return (calculations(str, i, sign));
}
