/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:06:51 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/11 08:39:51 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (d+i+1);
		i++;
	}

	return (NULL);
}

// int		main()
// {
// 	char	src[] = "test basic du memccpy !";
// 			char	buff1[22];

// 			memset(buff1, 0, sizeof(buff1));

// 			char	*r1 = memccpy(buff1, src, 'm', 22);
// 			char	*r2 = ft_memccpy(buff1, src, 'm', 22);
// 			int i;
// 			i = 0;
// 			while(i < 15)
// 			{
// 				printf("lui%d toi%d\n", r1[i], r2[i]);
// 				i++;
// 			}

// 	// printf("%d\n",memcmp(ft_memccpy(v, s, 'm', 22), memccpy(v, s, 'm', 22), 0));
// 			return (0);
// }
