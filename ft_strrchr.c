/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:36:35 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/05 01:34:13 by smedenec         ###   ########.fr       */
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

char	*ft_strrchr(char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) - 1;
	s = s + i;
	while (i--)
	{
		if (*s-- == (char)c)
			return (++s);
	}
	if (*s == (char)c)
		return (s);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[] = "francinetee";
// 	int	c;

// 	c = 'f';
// 	printf("%s\n", ft_strrchr(NULL, c));
// 	return (0);
// }
