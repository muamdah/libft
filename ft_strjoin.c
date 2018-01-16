/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 14:32:31 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/08 20:12:59 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		a;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	j = 0;
	a = (ft_strlen((char*)s1) + ft_strlen((char*)s2));
	s3 = (char*)malloc(sizeof(char) * a);
	if (!s3)
		return (NULL);
	while (i < ft_strlen((char*)s1))
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < ft_strlen((char*)s2))
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
