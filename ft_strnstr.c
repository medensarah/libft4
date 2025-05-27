/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:05:43 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/27 04:54:50 by smedenec         ###   ########.fr       */
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

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1)
		*s1 = 'X';
	if (n < ft_strlen(s2))
		return (NULL);
	if (ft_strlen(s2) == 0)
		return (s1);
	while (s1 && s1[i] && (n > 0))
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && (n > 0))
		{
			if (!s2[j + 1])
				return (&s1[i]);
			j++;
			n--;
		}
		i++;
		n--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	s1[] = "MZIRIBMZIRIBMZE123";
// 	char	s2[] = "MZIRIBMZE";

// 	printf("Mine = %s\n", ft_strnstr(s1, s2, 9));

// 	// char	s1bis[] = "c'est parlant";
// 	// char	s2bis[] = "parl";

// 	// printf("Real = %s\n", strnstr(s1bis, s2bis, 7));
// 	return (0);
// }
