/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 19:42:59 by user42            #+#    #+#             */
/*   Updated: 2020/12/23 17:53:26 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*d;
	size_t	i;

	i = 0;
	d = NULL;
	if (!s)
		return (NULL);
	if (s && f)
	{
		d = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
		if (!d)
			return (NULL);
		while (i < (size_t)ft_strlen((char *)s))
		{
			d[i] = f(i, s[i]);
			i++;
		}
	}
	d[i] = '\0';
	return (d);
}
