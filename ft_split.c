/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:35:53 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/17 17:50:33 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
	return (words);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		y;
	int		z;
	int		words;
	int		count;
	char	**array;

	i = 0;
	count = 0;
	words = ft_count_words(s, c);
	if (words == 0)
		return (NULL);
	array = (char**)malloc(sizeof(char *)*(words + 1));
	if (array == NULL)
		return (NULL);
	while (count < words)
	{
		while (s[i] == c)
			i++;
		y = 0;
		while ((s[i] != c) && s[i])
		{
			i++;
			y++;
		}
		i = i - y;
		array[count] = (char*)malloc(sizeof(char)*(y + 1));
		if (array[count] == NULL)
			return (NULL);
		z = 0;
		while (y--)
		{
			array[count][z] = s[i];
			i++;
			z++;
		}
		array[count][z] = '\0';
		count++;
	}
	array[count] = "\0";
	return (array);
}
int	main(void)
{
	char	s[] = " f0  f1 f1b f2 f4 f6";
	char	c;
	char	**cpy;

	c = ' ';
	cpy = ft_split(s, c);
	printf("a split = %s\n", cpy[2]);
	return (0);
}
