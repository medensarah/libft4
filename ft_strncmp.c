/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:49:19 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/23 20:30:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (n-- > 0)
	{
		if (s1[i] && (s1[i] == s2[i]))
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
// int	main(void)
// {
// 	printf("return = %d\n", ft_strncmp("index", "de", 5));
// }
