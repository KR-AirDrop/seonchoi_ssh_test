/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 14:58:00 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/22 14:58:11 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*a;
	t_list	*b;

	if (!lst || !del)
		return ;
	a = *lst;
	while (a)
	{
		b = a->next;
		del(a->content);
		free(a);
		a = b;
	}
	*lst = NULL;
}
