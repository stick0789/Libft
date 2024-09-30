/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:13:24 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/24 20:07:44 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	lendest;
	size_t	lensrc;

	i = 0;
	lendest = 0;
	lensrc = 0;
	while (*dest)
		lendest++;
	while (*src)
		lensrc++;
	if (size <= lendest)
		return (size + lensrc);
	else
	{
		while (*src && (lendest + i < size -1))
		{
			dest[lendest + i] = src[i];
			i++;
		}
		dest[lendest + i] = '\0';
		return (lendest + lensrc);
	}
}
