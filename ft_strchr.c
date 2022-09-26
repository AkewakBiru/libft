/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiru <abiru@student.42.ae>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:52:18 by abiru             #+#    #+#             */
/*   Updated: 2022/09/26 07:47:52 by abiru            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char 	*temp;

	i = 0;
	temp = (char *)s;
	while (temp[i] != '\0' && temp[i] != c)
		i++;
	if (temp[i] == c)
		return (temp + i);
	return (0);
}
