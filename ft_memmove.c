/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:54:20 by ababa             #+#    #+#             */
/*   Updated: 2021/11/16 23:27:27 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	move(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

static void	revmove(char *dest, char *src, size_t i)
{
	while (i > 0)
	{	
		dest[i] = src[i];
		i--;
	}
	dest[i] = src[i];
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*nsrc;
	char	*ndest;

	nsrc = (char *)src;
	ndest = (char *)dest;
	i = n - 1;
	if ((!dest && !src) || n == 0)
		return (dest);
	if (ndest > nsrc)
	{
		revmove(ndest, nsrc, i);
	}
	else if (ndest <= nsrc)
	{
		move(ndest, nsrc, n);
	}
	return (dest);
}
