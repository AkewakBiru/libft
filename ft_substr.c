/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:03:38 by abiru             #+#    #+#             */
/*   Updated: 2022/09/30 17:18:59 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ptr;
	unsigned int	size;

	i = 0;
	size = ft_strlen(s);
	if (start >= size)
	{
		ptr = (char *)malloc(sizeof(*s) * 1);
		ptr[i] = 0;
		return (ptr);
	}
	if (len > size - start)
		ptr = (char *)malloc(sizeof(*s) * (size - start + 1));
	else
		ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
