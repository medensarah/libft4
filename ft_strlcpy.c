/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/05 02:44:31 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (!d)
		return (s);
	if (!s)
		return (d);
	while (src[i] && size--)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
// int	main(void)
// {
// 	size_t	size;
// 	char	dst[] = "42";
// 	char	src[] = "Forti";

// 	size = 13;
// 	printf("%zu\n", ft_strlcpy(dst, src, size));
// 	printf("dest = %s\n", dst);
// 	printf("src = %s\n", src);
// 	return (0);
// }
