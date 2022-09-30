/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:05:15 by abiru             #+#    #+#             */
/*   Updated: 2022/09/30 13:55:39 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	temp = *lst;
	current = *lst;
	if (lst == NULL || !del)
		return ;
	while (current != NULL)
	{
		current = current -> next;
		ft_lstdelone(temp, del);
		temp = current;
	}
	*lst = NULL;
	return ;
}
