/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:59:44 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/22 14:59:45 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	if (!lst || !f)
		return (NULL);
	if (!(a = ft_lstnew(f(lst->content))))
		return (NULL);
	b = a;
	lst = lst->next;
	while (lst)
	{
		if (!(a = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&b, del);
			return (0);
		}
		lst = lst->next;
		ft_lstadd_back(&b, a);
	}
	a->next = NULL;
	return (b);
}
