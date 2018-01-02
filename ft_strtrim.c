/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 18:47:00 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/02 15:50:24 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char const *s)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i])
	{
		a++;
		i++;
	}
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		a--;
		i--;
	}
	return (a);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		a;
	char	*s2;

	a = 0;
	i = 0;
	s2 = malloc(sizeof(ft_count(s) + 1));
	if (!s2)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (a < ft_count(s))
	{
		s2[a] = s[i];
		a++;
		i++;
	}
	s2[a] = '\0';
	return (s2);
}
