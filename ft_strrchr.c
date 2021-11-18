/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:30:23 by ababa             #+#    #+#             */
/*   Updated: 2021/11/16 16:37:13 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

char	*ft_strrchr(const char *str, int c)
{
	int				len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	while (len > 0)
	{
		if (str[len] == (char) c)
		{
			return ((char *)(str + len));
		}
		len--;
	}
	if (str[len] == (char) c)
	{
		return ((char *)(str + len));
	}
	return (NULL);
}
