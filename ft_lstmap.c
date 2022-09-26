/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:17:22 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 16:31:22 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *temp;

	temp = NULL;
	new = NULL;
	if (!f || !del || !lst)
		return (NULL);
	
	while (lst != NULL)
	{
		// temp = lst;
		temp -> content = (*f)(lst -> content);
		temp -> next = NULL;
		ft_lstadd_back(&new, temp);
		// lst -> content = (*f)(lst -> content);
		lst = lst -> next;
	}
	while (lst != NULL)
	{
		ft_lstdelone(lst, del);
		lst = lst -> next;
	}
	lst = NULL;
	return (new);
}