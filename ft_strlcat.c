/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/26 04:14:31 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// int	ft_strlen(const char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s;
	size_t	len_d;
	size_t	i;

	i = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	if (size <= len_d)
		return (size + len_s);
	while ((len_d + i < size - 1) && src[i])
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_s + len_d);
}
// int	main(void)
// {
// 	size_t	size;
// 	char	dst[] = "Wallet";
// 	char	src[] = "_point";

// 	size = 2;
// 	printf("mine = %zu\n", ft_strlcat(dst, src, size));
// 	printf("dest = %s\n", dst);
// 	printf("src = %s\n", src);
// 	return (0);
// }
