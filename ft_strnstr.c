/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:39:12 by ababa             #+#    #+#             */
/*   Updated: 2021/11/06 12:07:31 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 

char	*ft_strnstr(const char *bigstr, const char *smallstr, size_t len)
{
	size_t	i;
	size_t	j;
	char	*nbigstr;
	char	*nsmallstr;

	i = 0;
	nbigstr = (char *) bigstr;
	nsmallstr = (char *) smallstr;
	if (nsmallstr[0] == '\0')
		return (nbigstr);
	while (nbigstr[i] != '\0')
	{
		j = 0;
		while (nbigstr[i + j] == nsmallstr[j] && i + j < len)
		{
			if (nsmallstr[j + 1] == '\0')
				return (&nbigstr[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
