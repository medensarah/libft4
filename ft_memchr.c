/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/30 14:36:54 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	char	*ptr;

// 	ptr = s;
// 	while (n--)
// 		if (*ptr++ == (char)c)
// 			return (--ptr);
// 	if (!(*ptr) && (c == '\0'))
// 		return (ptr);
// 	return (NULL);
// }
// int	main(void)
// {
// 	char	ptr[] = "V.&U.0...h...$i5";
// 	int	c;

// 	c = '5';
// 	printf("%s\n", (char *)ft_memchr(ptr, c, 26));
// 	return (0);
// }
