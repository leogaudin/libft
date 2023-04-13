/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:00:32 by lgaudin           #+#    #+#             */
/*   Updated: 2023/04/13 14:11:27 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (0);
	new = 0;
	while (lst)
	{
		if (ft_lstnew(f(lst->content)))
			ft_lstadd_back(&new, ft_lstnew(f(lst->content)));
		else
			ft_lstclear(&new, del);
		lst = lst->next;
	}
	return (new);
}
