/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 21:14:43 by user42            #+#    #+#             */
/*   Updated: 2021/06/04 14:28:36 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_cpy(int l, int i, char const *s1, char *d)
{
	int		j;

	j = 0;
	while (j < l)
	{
		d[j] = s1[i];
		j++;
		i++;
	}
	d[j] = '\0';
	return (d);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		l;
	char	*d;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen((char *)s1) - 1;
	while (s1[i] && is_set(s1[i], set) == 1)
		i++;
	if (i == ft_strlen((char *)s1))
		i = 0;
	while (j >= 0 && is_set(s1[j], set) == 1)
		j--;
	j += 1;
	d = malloc(sizeof(char) * j - i + 1);
	if (d == NULL)
		return (NULL);
	l = j - i;
	return (ft_cpy(l, i, s1, d));
}
