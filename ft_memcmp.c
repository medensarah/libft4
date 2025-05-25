/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/23 20:21:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	char	*s1_ch;
	char	*s2_ch;
	int		i;

	i = 0;
	s1_ch = s1;
	s2_ch = s2;
	while (n--)
	{
		if (s1_ch[i] && s1_ch[i] == s2_ch[i])
			i++;
		else
			return (s1_ch[i] - s2_ch[i]);
	}
	return (0);
}
// int	main(void)
// {
// 	char	s1[] = "D'accord";
// 	char	s2[] = "D'abord";

// 	printf("%d\n", ft_memcmp(s1, s2, 7));
// 	return (0);
// }
