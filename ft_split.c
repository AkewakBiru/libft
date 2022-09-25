/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 07:42:30 by abiru             #+#    #+#             */
/*   Updated: 2022/09/25 19:20:09 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i - 1] && s[i] == c && s[i - 1] != c)
			count++;
		i++;
	}
	return (count);
}

static int	str_size(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i - 1] && s[i] == c && s[i - 1] != c)
			return (i);
		i++;
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	int		count;
	char	**ptr;

	i = 0;
	j = 0;
	count = ft_count(s, c);
	if (!(ptr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 2))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		j = 0;
		if (s[i - 1] && s[i] == c && s[i - 1] != c)
		{
			j++;
		}
		i++;
	}
	j = str_size(s, c);
	ptr[i] = 0;
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	s[50] = "trialanderror";
// 	char **ptr;
// 	ptr = ft_split(s, 'r');
// }
