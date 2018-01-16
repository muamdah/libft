/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muamdah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 13:06:51 by muamdah           #+#    #+#             */
/*   Updated: 2017/12/29 17:23:54 by muamdah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*fresh;
	fresh = malloc(sizeof(size));
	if (!fresh || size > 2147493647)
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
