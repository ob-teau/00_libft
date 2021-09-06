/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:59:59 by user42            #+#    #+#             */
/*   Updated: 2020/12/09 15:41:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*mem;
	unsigned int	i;

	mem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		mem[i] = (char)c;
		i++;
	}
	return (s);
}
