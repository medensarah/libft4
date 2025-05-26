/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/26 22:35:37 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	s = s + i;
	if ((char)c == '\0')
		return (++s);
	while (i-- > -1)
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
