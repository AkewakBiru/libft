/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:03:07 by abiru             #+#    #+#             */
/*   Updated: 2022/09/25 16:24:31 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_strlen(const char *s)
// {
// 	static int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

static int	in_set(char s, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0')
	{
		if (in_set(s1[i++], set) == 1)
			len--;
	}
	if (!(ptr = malloc(sizeof(char) * len)))
		return (NULL);
	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		if (in_set(s1[i], set) == 0)
			ptr[len++] = s1[i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
