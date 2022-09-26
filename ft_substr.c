/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:03:38 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 09:26:31 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ptr;
	unsigned int	size;

	i = 0;
	size = 0;
	ptr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ptr)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
	{
		ptr[i] = 0;
		return (ptr);
	}
	while (i < len && s[start])
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
