/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:49:04 by abiru             #+#    #+#             */
/*   Updated: 2022/09/24 12:49:55 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	start;
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	dst_size = 0;
	src_size = 0;
	i = 0;
	while (dst[dst_size] != '\0')
		dst_size++;
	while (src[src_size] != '\0')
		src_size++;
	if (dstsize <= dst_size)
		return (dstsize + src_size);
	start = dst_size;
	while (src[i] != '\0' && start + 1 < dstsize)
		dst[start++] = src[i++];
	dst[start] = '\0';
	src_size = 0;
	while (src[src_size + i] != '\0')
		src_size++;
	return (dst_size + src_size);
}
