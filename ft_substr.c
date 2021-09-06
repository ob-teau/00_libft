/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:02:11 by user42            #+#    #+#             */
/*   Updated: 2021/06/04 14:32:58 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*d;
	size_t		i;
	size_t		j;

	i = 0;
	j = start;
	d = malloc(sizeof(char) * len + 1);
	if (d == NULL || !s)
		return (NULL);
	if ((int)start >= ft_strlen(s))
		return (d);
	while (s[i] && i < len)
	{
		if (j >= start && i < len)
		{
			if (len == 0)
				return (s);
			d[i] = s[j];
			j++;
		}
		i++;
	}
	d[i] = '\0';
	return (d);
}
