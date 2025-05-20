/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 13:35:53 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/20 22:25:42 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	build_word(char *array, char *s, int len_word, int i)
{
	int	index_char;

	index_char = 0;
	while (len_word--)
	{
		array[index_char++] = s[i++];
	}
	array[index_char] = '\0';
	return (i);
}

int	len_string(char *s, char c, int i)
{
	int	len_word;

	len_word = 0;
	while ((s[i] != c) && s[i])
	{
		i++;
		len_word++;
	}
	return (len_word);
}

int	malloc_fail(char **array, int index_word)
{
	if (array[index_word] == NULL)
	{
		while (index_word >= 0)
		{
			free(array[index_word]);
			index_word--;
		}
		return (1);
	}
	return (0);
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
	int		index_word;
	int		words;
	char	**array;

	i = 0;
	index_word = 0;
	words = ft_count_words(s, c);
	if (words == 0)
		return (NULL);
	array = (char **)malloc(sizeof(char *) *(words + 1));
	if (array == NULL)
		return (NULL);
	while (index_word < words)
	{
		while (s[i] == c)
			i++;
		array[index_word] = malloc(sizeof(char) *(len_string(s, c, i) + 1));
		if (malloc_fail(array, index_word))
			return (NULL);
		i = build_word(array[index_word++], s, len_string(s, c, i), i);
	}
	array[index_word] = NULL;
	return (array);
}
// int	main(void)
// {
// 	char	s[] = "AAA BBB CC DD";
// 	char	c;
// 	int		i;
// 	char	**cpy;

// 	c = ' ';
// 	i = 0;
// 	cpy = ft_split(s, c);
// 	if (cpy)
// 	{
// 		while (cpy[i])
// 		{
// 		printf("a split = %s\n", cpy[i]);
// 		free(cpy[i]);
// 		i++;
// 		}
// 		free(cpy);
// 	}
// 	else
// 	{
// 		printf("a split = %s\n", (char *)cpy);
// 	}
// 	return (0);
// }
