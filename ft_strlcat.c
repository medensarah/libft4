/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/25 06:40:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	int	d;
	int	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (s >= d)
	{
		s = 0;
		while (src[s] && --size)
		{
			dst[d + s] = src[s];
			s++;
		}
		dst[d + s] = '\0';
		return (d + s);
	}
	else
		return (d + s);
}
// int	main(void)
// {
// 	size_t	size;
// 	char	dst[] = "wallet";
// 	char	src[] = "_point";

// 	size = 10;
// 	printf("%zu\n", ft_strlcat(dst, src, size));
// 	printf("dest = %s\n", dst);
// 	printf("src = %s\n", src);
// 	return (0);
// }
