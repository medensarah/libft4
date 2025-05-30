/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/30 15:36:34 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	s = s + i -1;
	if ((char)c == '\0')
		return (++s);
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
