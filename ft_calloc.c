/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:01:57 by user42            #+#    #+#             */
/*   Updated: 2021/02/03 11:05:35 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		total;
	int		i;
	char	*dest;

	total = count * size;
	dest = malloc(total);
	i = 0;
	if (!dest)
		return (NULL);
	else
	{
		while (total--)
		{
			dest[i] = 0;
			i++;
		}
	}
	return ((void *)dest);
}
