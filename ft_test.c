/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 18:27:13 by abiru             #+#    #+#             */
/*   Updated: 2022/09/28 19:22:27 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	j = 0;

	if (dst_len > dstsize || dstsize == 0)
	{
		// should return the " length of src + dstsize " if the len of destination > dstsize or dstsize == 0
		return (dstsize + src_len);
	}
	j = dstsize - dst_len - 1;
	while (i < j)
	{
		dst[dst_len++] = src[i++];
	}
	dst[dst_len] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

#include <stdio.h>
#include <string.h>
int main()
{
	char	*str = "the cake is a lie !\0I'm hidden lol\r\n";
	char	buff1[0xF00] = "there is no stars in the sky";
	char	buff2[0xF00] = "there is no stars in the sky";
	size_t	max = ft_strlen(str) + 4;
	// printf("dstsize: %lu\tdest_size: %lu\n", max, ft_strlen(buff1));
	// printf("%lu\t", ft_strlcat(buff1, str, 30));
	printf("%lu", strlcat(NULL, str, 0));
}