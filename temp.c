#include <stdio.h>
#include <string.h>
#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	start;
	size_t	dst_len;
	size_t	src_len;

	if (!src || !dst)
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

int main()
{
	char s[] = "";
	printf("%lu\n", ft_strlcat("sdd", "sdds", 0));
	// printf("%zu\n", ft_strlen(NULL));
	// printf("%zu\n", strlen(NULL));
	printf("")
	if (calloc(0, 0) != NULL)
		puts("correct");
}