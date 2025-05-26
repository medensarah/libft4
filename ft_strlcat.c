/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/26 03:55:32 by smedenec         ###   ########.fr       */
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

// size_t	ft_strlcat(char *dst, char *src, size_t size)
// {
// 	size_t	dst_len;
// 	size_t	src_len;
// 	size_t	e;
// 	size_t	i;

// 	i = 0;
// 	src_len = ft_strlen(src);
// 	dst_len = ft_strlen(dst);
// 	if ((size > dst_len))
// 	{
// 		e = size - 1;
// 		while (src[i] && e && ((i + dst_len) < e))
// 		{
// 			dst[dst_len + i] = src[i];
// 			i++;
// 			e--;
// 		}
// 		dst[dst_len + i] = '\0';
// 	}
// 	if (src_len == 0)
// 		return (0);
// 	if (size > src_len + dst_len || (dst_len < src_len && size > src_len))
// 		return (src_len + dst_len);
// 	else
// 		return (src_len + size);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	d;
	size_t	src_len;
	size_t	dst_len;
	size_t	size_cpy;

	size_cpy = size;
	src_len = ft_strlen(src);
 	dst_len = ft_strlen(dst);
	i = 0;
	d = 0;
	while (dst[i] && size_cpy > 0)
	{
		size_cpy--;
		i++;
	}
	while (src[i + d] && size_cpy > 0)
	{
		dst[i + d] = src[d];
		d++;
		size_cpy--;

	}
	if (size_cpy > 0)
		dst[i + d] = '\0';
	if (size > src_len + dst_len || (dst_len < src_len && size > src_len))
		return (src_len + dst_len);
	else
		return (src_len + size);
}
