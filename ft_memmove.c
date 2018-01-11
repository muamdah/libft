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
	size_t	i;
	char	*d;
	char	*s;
	char	tmp;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (s[i] != '\0' && i < n)
	{
		tmp = s[i];
		d[i] = tmp;
		i++;
	}
	dest = (void *)d;
	return (dest);
}
