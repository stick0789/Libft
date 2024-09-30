/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:09:45 by jaacosta          #+#    #+#             */
/*   Updated: 2024/09/19 17:31:00 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*rtn;

	rtn = malloc(size * nmemb);
	if (!rtn)
		return (NULL);
	ft_bzero(rtn, size * nmemb);
	return (rtn);
}
