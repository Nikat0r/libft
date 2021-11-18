/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:56:54 by ababa             #+#    #+#             */
/*   Updated: 2021/11/06 12:32:49 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*nstr1;
	unsigned char	*nstr2;

	i = 0;
	nstr1 = (unsigned char *) str1;
	nstr2 = (unsigned char *) str2;
	while (i < n)
	{
		if (nstr1[i] != nstr2[i])
			return (nstr1[i] - nstr2[i]);
		i++;
	}
	return (0);
}
