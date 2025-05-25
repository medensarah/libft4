/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/23 20:23:39 by marvin           ###   ########.fr       */
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
