/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:05:43 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/31 14:17:44 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// size_t	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		stock;

	i = 0;
	j = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] && (n > 0))
	{
		j = 0;
		stock = 0;
		while ((s1[i + j] == s2[j]) && (n > 0))
		{
			if (!s2[j + 1])
				return ((char *)&s1[i]);
			j++;
			n--;
			stock++;
		}
		n += stock;
		i++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str;
// 	str = ft_strnstr("aaabcabcd", "abcd", 9);

// 	printf("%s\n", str);
// 	return (0);
// }
