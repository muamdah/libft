/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 19:04:00 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/09 15:47:04 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (s < d && n > 0)
	{
		while (0 <= (int)n)
		{
			d[n] = s[n];
			n--;
		}
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
