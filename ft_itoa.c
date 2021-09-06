/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 17:05:44 by user42            #+#    #+#             */
/*   Updated: 2021/06/02 12:43:50 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_abs(long int nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}

int	is_neg(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

int	ft_len(long int nb)
{
	int		len;

	if (nb <= 0)
		len = 1;
	else
		len = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len;
	char	*d;

	sign = is_neg(n);
	len = ft_len((long int)n);
	d = (char *)malloc(sizeof(char) * len + 1);
	if (!d)
		return (NULL);
	d[len] = '\0';
	len--;
	while (len >= 0)
	{
		d[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	if (sign == -1)
		d[0] = '-';
	return (d);
}
