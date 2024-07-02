/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssuchane <ssuchane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:31:26 by ssuchane          #+#    #+#             */
/*   Updated: 2024/03/18 22:46:11 by ssuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_help(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;
	void	*inside;

	newlist = NULL;
	while (lst != NULL)
	{
		inside = f(lst->content);
		if (!inside)
		{
			ft_lstclear(&newlist, del);
			free (newlist);
			return (NULL);
		}
		node = ft_lstnew(inside);
		if (!node)
		{
			ft_lstclear(&newlist, del);
			free (newlist);
			return (NULL);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst->next;
	}
	return (newlist);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	newlist = ft_help(lst, f, del);
	return (newlist);
}
