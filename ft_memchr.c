/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/04/28 18:33:50 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = s;
	while (n-- && *ptr)
	{
		if (*ptr++ == (char)c)
			return (--ptr);
	}
	return (NULL);
}
// int	main(void)
// {
// 	char	ptr[] = "42Up";
// 	int	c;

// 	c = 'U';
// 	printf("%s\n", (char *)ft_memchr(ptr, c, 7));
// 	return (0);
// }
