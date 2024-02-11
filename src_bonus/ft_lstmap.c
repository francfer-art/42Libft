/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:01:27 by francfer          #+#    #+#             */
/*   Updated: 2023/10/04 10:29:01 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*copy;
	void	*temp;

	new = 0;
	while (lst)
	{
		temp = f(lst->content);
		copy = ft_lstnew(temp);
		if (!copy)
		{
			del(temp);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, copy);
		lst = lst->next;
	}
	return (new);
}
