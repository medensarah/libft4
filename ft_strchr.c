/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/26 04:34:29 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s++ == (char)c)
			return (--s);
	}
	if ((char)c == '\0')
		return (s);
	return (NULL);
}
// int	main(void)
// {
// 	char	s[] = "Forti42";
// 	char	*str;
// 	int	c;

// 	c = 'o';
// 	str = ft_strchr(s, c);
// 	printf("%s\n", str);
// 	return (0);
// }
