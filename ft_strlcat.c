/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:49:04 by abiru             #+#    #+#             */
/*   Updated: 2022/10/01 10:18:15 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	start;
	size_t	dst_len;
	size_t	src_len;

	src_len = 0;
	dst_len = 0;
	if (!dstsize && !src && !dst)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	start = dst_len;
	i = 0;
	if (dst_len < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dst_len + i < dstsize - 1)
			dst[start++] = src[i++];
		dst[start] = '\0';
	}
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	return (dst_len + src_len);
}
