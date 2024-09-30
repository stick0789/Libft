/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:19:48 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/24 20:10:37 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*b;
	const char	*l;

	if (len == 0 || !*little)
		return ((char *)big);
	while (len-- > 0 && *big)
	{
		b = big;
		l = little;
		while (*l && *l == *b)
		{
			b++;
			l++;
		}
		if (!*l)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
