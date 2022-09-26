/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:49:04 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 08:19:07 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	start;
// 	size_t	i;
// 	size_t	dst_size;
// 	size_t	src_size;

// 	dst_size = 0;
// 	src_size = 0;
// 	i = 0;
// 	while (dst[dst_size] != '\0')
// 		dst_size++;
// 	while (src[src_size] != '\0')
// 		src_size++;
// 	if (dst_size > dstsize || dstsize == 0)
// 		return (dstsize + src_size);
// 	start = dst_size;
// 	while (src[i] != '\0' && start + 1 < dstsize)
// 		dst[start++] = src[i++];
// 	dst[start] = '\0';
// 	src_size = 0;
// 	while (src[src_size + i] != '\0')
// 		src_size++;
// 	return (dst_size + src_size);
// }

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
