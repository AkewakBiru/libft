/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:45:19 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 07:46:55 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char src[] = "\0";
// 	char dst[] = "\0";
// 	printf("+%s+\n", (char *)ft_memcpy(dst, src, 3));
// }
