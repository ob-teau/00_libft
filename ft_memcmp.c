/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:03:48 by user42            #+#    #+#             */
/*   Updated: 2021/06/02 12:47:09 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*d1;
	unsigned char		*d2;
	size_t				cmp;

	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	cmp = 0;
	if (n == 0)
		return (0);
	while (cmp < n)
	{
		if (d1[cmp] != d2[cmp])
			return ((int)d1[cmp] - (int)d2[cmp]);
		cmp++;
	}
	return (0);
}
