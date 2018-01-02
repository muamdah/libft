/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 14:32:31 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/01 16:52:11 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*s2;

	s2 = ft_strnew(len);
	a = 0;
	if (!s)
		return (NULL);
	while (a < len)
	{
		s2[a] = s[start];
		a++;
		start++;
		if (a == len)
			return (s2);
	}
	return (NULL);
}
