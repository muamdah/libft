/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/01 18:47:00 by muamdah           #+#    #+#             */
/*   Updated: 2018/01/04 19:57:26 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_mot(char const *s, char c)
{
	int		i;
	int		b;

	i = 0;
	b = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c &&s[i])
			i++;
		b++;
		while (s[i] == c && s[i])
			i++;
	}
	return (b);
}

static int		ft_count_lettre(char const *s, char c, int i, int *j)
{
	int x;

	x = *j
	while (s[x] != c && s[x])
	{
		i++;
		x++;
	}
	printf("%d\n",i);
	*j = x
	return (i);
}
static char		*ft_printer(char const *s, char c, int *j)
{
	static int i;
	int a;
	int j;
	char *w;

	i = 0;
	a = 0;
	j = 0;
	w = malloc(sizeof(char) * (ft_count_lettre(s, c, i, j)  + 1));
	if (!w)
		return (NULL);
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		while (s[j] != c && s[j])
			w[a++] = s[j++];
		if (s[j] == c && s[j])
			
//		i++;
	}
	w[a] = '\0';
	return (w);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		a;
	int 	j;
	char	**s2;
	//	char	*s3;

	a = 0;
	i = 0;
	j = 0;
	s2 = malloc(sizeof(ft_count_mot(s, c) + 1));
	if (!s2)
		return (NULL);
	while (s[i])
	{
		while (a < ft_count_mot(s, c) && s[i] != c)
		{
			s2[a] = ft_printer(s, c, &j);
			a++;
			i++;
		}
		i++;
	}
	s2[a] = NULL;
	return (s2);
}

int		main()
{
	char	*s;
	s =ft_strdup("bonjour karim");
	char c;

	c = ' ';
	printf("%s\n", ft_strsplit(s, c)[0]);
	printf("%s\n", ft_strsplit(s, c)[1]);
	printf("%s\n", ft_strsplit(s, c)[2]);
	return (0);
}
