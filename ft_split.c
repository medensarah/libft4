/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:35:53 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/17 15:12:18 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_words(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while ((s[i] != c) && s[i])
			i++;
		if ((s[i] == c || !s[i]) && (s[i - 1] != c))
			words++;
		if (!s[i])
			return (words);
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		else
			w++;
	}
}
// int	main(void)
// {
// 	char	s[] = " f0  f1 f1b f2 f4 f6 ";
// 	char	c;
// 	char	**cpy;

// 	c = ' ';
// 	cpy = ft_split(s, c);
// 	printf("all split = %s\n", cpy[0]);
// 	return (0);
// }
