/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/23 20:21:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
