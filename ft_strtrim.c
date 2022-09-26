/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:03:07 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 11:14:21 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (!set || set[0] == '\0')
		return (ft_strdup(s1));
	ptr = (char *)malloc(sizeof(*s1) * len);
	if (!ptr)
		return (NULL);
	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		if (in_set(s1[i], set) == 0)
			ptr[len++] = s1[i];
		i++;
	}
	ptr[len] = 0;
	return (ptr);
}

#include <stdio.h>
int main()
{
	char *str = ft_strtrim("   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ", "Hello \t  Please\n Trim me !");
	printf("++%s++\n", str);
}