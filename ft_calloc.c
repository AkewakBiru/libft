/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:01:42 by abiru             #+#    #+#             */
/*   Updated: 2022/10/01 10:05:30 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size == 0 && count == 0)
	{
		ptr = malloc(1);
		*(char *)(ptr + 0) = '\0';
		return (ptr);
	}
	if (size && count <= SIZE_MAX / size)
		ptr = malloc(size * count);
	else
		return (NULL);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}
