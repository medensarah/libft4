/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/27 01:10:08 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

void	*ft_memchr(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n-- && *ptr)
		if (*ptr++ == (char)c)
			return (--ptr);
	if (!(*ptr) && (c == '\0'))
		return (ptr);
	return (NULL);
}
// int	main(void)
// {
// 	char	ptr[] = "V.&U.0...h...$i5";
// 	int	c;

// 	c = '5';
// 	printf("%s\n", (char *)ft_memchr(ptr, c, 26));
// 	return (0);
// }
