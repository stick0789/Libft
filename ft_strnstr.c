/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:19:48 by jaacosta          #+#    #+#             */
/*   Updated: 2024/10/07 20:56:15 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;

	if (!*little)
		return ((char *)big);
	l = little;
	while (len-- > 0 && *big)
	{
		b = big;
		while (*little && *l == *b && len < (l + b))
		{
			b++;
			l++;
		}
		if (!*l)
			return ((char *)b);
		big++;
		little++;
	}
	return (NULL);
	if (*l == *b)
		return ((char *)b);
}
