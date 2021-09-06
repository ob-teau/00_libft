/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <acoinus@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:04:20 by user42            #+#    #+#             */
/*   Updated: 2021/06/04 14:20:15 by acoinus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_rempli_d(char *d, char *is_s1, char *is_s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < (size_t)ft_strlen(is_s1))
	{
		d[i] = is_s1[j];
		i++;
		j++;
	}
	j = 0;
	while (i < (size_t)(ft_strlen(is_s1) + ft_strlen(is_s2)))
	{
		d[i] = is_s2[j];
		i++;
		j++;
	}
	return (d);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*d;
	char		*is_s1;
	char		*is_s2;
	size_t		total;

	is_s1 = (char *)s1;
	is_s2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	total = (size_t)ft_strlen(is_s1) + (size_t)ft_strlen(is_s2);
	d = malloc(sizeof(char) * total + 1);
	if (!d)
		return (NULL);
	d = ft_rempli_d(d, is_s1, is_s2);
	d[total] = '\0';
	return (d);
}
//
//
// * char	*ft_strjoin(char *s1, char *s2)
//{
//	size_t	i;
//	size_t	j;
//	char	*str;
//	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
//	if (str == NULL)
//		return (NULL);
//	str[0] = ‘\0’;
//	i = 0;
//	while (s1 && s1[i])
//	{
//		str[i] = s1[i];
//		i++;
//	}
//	j = 0;
//	while (s2 && s2[j])
//	{
//		str[i + j] = s2[j];
//		j++;
//	}
//	str[i + j] = ‘\0’;
//	return (str);
//}
