/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 12:19:57 by user42            #+#    #+#             */
/*   Updated: 2020/12/23 20:08:27 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;
	size_t			cmp;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	cmp = 0;
	if (n == 0)
		return (0);
	while (cmp < n)
	{
		if (d1[cmp] == '\0')
			return ((int)d1[cmp] - (int)d2[cmp]);
		if (d1[cmp] != d2[cmp])
			return ((int)d1[cmp] - (int)d2[cmp]);
		cmp++;
	}
	return (0);
}
