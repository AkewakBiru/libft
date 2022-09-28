/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 07:42:30 by abiru             #+#    #+#             */
/*   Updated: 2022/09/28 16:08:16 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count(const char *s, char c)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			j++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (j);
}

static int	find_end(int start, const char *s, char c)
{
	while (s[start] && s[start] != c)
		start++;
	return (start);
}

static char	*ft_cpy(const char *s, char *dst, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}

static char **ft_additems(const char *s, char c, char **ptr, char *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < ft_count(s, c))
	{
		while (s[j] == c)
			j++;
		tab = (char *)malloc(sizeof(*s) * (find_end(j, s, c) - j + 1));
		if (!tab)
		{
			i = 0;
			while (ptr[i])
				free(ptr[i++]);
			free(ptr);
			return (0);
		}
		ft_cpy(s, tab, j, find_end(j, s, c));
		j = find_end(j, s, c);
		ptr[i++] = tab;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char *tab;

	ptr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	tab = NULL;
	if (!ptr || !s)
		return (NULL);
	if (!ft_additems(s, c, ptr, tab))
		return (0);
	ptr[ft_count(s, c)] = 0;
	return (ptr);
}


// int main()
// {
//   char	*s = "olol                     ";
//   char **res = ft_split(s, ' ');
//   int i = 0;
//   printf("%d\n", ft_count(s, ' '));
//   while (res[i] != 0)
//   {
//     printf("%s\n", res[i]);
//     i++;
//   }
// }