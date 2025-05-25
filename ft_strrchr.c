/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/23 20:30:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - 1;
	s = s + i;
	while (i--)
	{
		if (*s-- == (char)c)
			return (++s);
	}
	if (*s == (char)c)
		return (s);
	return (NULL);
}
// int	main(void)
// {
// 	char	str[] = "francinetee";
// 	int	c;

// 	c = 'f';
// 	printf("%s\n", ft_strrchr(NULL, c));
// 	return (0);
// }
