/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaacosta <jaacosta@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:35:05 by jaacosta          #+#    #+#             */
/*   Updated: 2024/10/05 19:53:20 by jaacosta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstllast(t_list *lst)
{
	while (*lst)
	{
		lst = lst->next;
		lst++;
	}
	return (lst);
}
