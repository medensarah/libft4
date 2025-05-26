/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:49:19 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/27 00:36:31 by smedenec         ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (n--)
	{
		if (s1[i] && s2[i] && (s1[i] == s2[i]))
			i++;
		else
		{
			if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
				return (1);
			else if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
				return (-1);
		}
	}
	return (0);
}
// int	main(void)
// {
// 	printf("return = %d\n", ft_strncmp("abcdef", "abc\375xx", 6));
// }
