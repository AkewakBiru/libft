/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:46:28 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 13:55:15 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{		
		*lst = new;
		return ;
	}
	while ((*lst) -> next != NULL)
		lst++;
	(*lst) -> next = new;
	return ;
}