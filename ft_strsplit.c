/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 18:47:00 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/02 19:06:25 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char const *s, char c)
{
	int		i;
	int		a;
	int		b;

	i = 0;
	a = 0;
	b = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		while (s[i] != c)
		{
			a++;
			i++;
		}
		b++;
		while (s[i] == c)
			i++;
	}
	return (b);
}

/*char	*ft_strsplit(char const *s, char c)
{
	int		i;
	int		a;
	char	*s2;

	a = 0;
	i = 0;
	s2 = malloc(sizeof(ft_count(s, c) + 1));
	if (!s2)
		return (NULL);
	while (s[i])
		i++;
	while (a < ft_count(s))
	{
		s2[a] = s[i];
		a++;
		i++;
	}
	s2[a] = '\0';
	return (s2);
}*/

int		main()
{
	char	s[] = "**bjo*u**r**bnn * ***";
	char c;

	c = '*';
	printf("%d\n", ft_count(s, c));
	return (0);
}
