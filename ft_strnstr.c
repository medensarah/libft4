/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:05:43 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/23 20:30:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] && n-- > 0)
	{
		j = 0;
		i++;
		while (s1[i + j] == s2[j])
		{
			j++;
			if (!s2[j])
				return (&s1[i]);
		}
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	s1[] = "c'est parlant";
// 	char	s2[] = "parl";

// 	printf("%s\n", ft_strnstr(s1, s2, 7));
// 	return (0);
// }
