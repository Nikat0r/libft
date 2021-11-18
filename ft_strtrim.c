/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:29:12 by ababa             #+#    #+#             */
/*   Updated: 2021/11/16 11:13:06 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static unsigned int	startindex(char	const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				break ;
			else
				j++;
		}
		if (s1[i] != set[j])
			break ;
		i++;
	}
	return (i);
}

static int	revindex(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = ft_strlen(s1) - 1;
	while (k > 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[k])
				break ;
			else
				j++;
		}
		if (s1[k] != set[j])
			break ;
		k--;
	}
	return (k);
}

static char	*filling(char *ptr, char const *s1, int x, int i)
{
	int	j;

	j = 0;
	while (j < x)
	{
		ptr[j] = s1[j + i];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		i;
	int					k;
	int					x;
	char				*ptr;

	if (!s1)
		return (NULL);
	if (set[0] == '\0')
		return (ft_strdup(s1));
	i = startindex(s1, set);
	k = revindex(s1, set);
	if ((i == ft_strlen(s1) || (k == 0) || (s1[0] == '\0')))
	{
		ptr = malloc(1);
		ptr[0] = '\0';
		return (ptr);
	}
	x = k - i + 1;
	ptr = malloc(x + 1);
	if (!ptr)
		return (NULL);
	return (filling(ptr, s1, x, i));
}
