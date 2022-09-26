/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:05:15 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 16:08:07 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list **temp;

	temp = lst;
	if (*lst == NULL || lst == NULL || !del)
		return ;
	while ((*lst) != NULL && lst != NULL)
	{
		(*lst) = (*lst) -> next;
		(*del)(*temp);
		free(*temp);
		temp = lst;
	}
	lst = NULL;
	return ;
}