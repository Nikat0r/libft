/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:43:09 by ababa             #+#    #+#             */
/*   Updated: 2021/11/06 11:59:49 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*nstr;
	unsigned char	x;

	i = 0;
	nstr = (unsigned char *)str;
	x = (unsigned char) c;
	while (i < n)
	{
		if (nstr[i] == x)
			return (&nstr[i]);
		i++;
	}
	return (NULL);
}
