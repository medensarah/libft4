/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 02:05:26 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/31 14:56:10 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_striteri(char *s, void (*f)(unsigned int, char*))
// {
// 	char			*dest;
// 	unsigned int	i;

// 	i = 0;
// 	if (!f || !s)
// 		return (NULL);
// 	dest = malloc(sizeof(char) *(ft_strlen(s) + 1));
// 	if (dest == NULL)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		dest[i] = (char)f(i, s[i]);
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int	main(void)
// {
// 	char	str[] = "Hackathon";

// 	printf("le int = %s\n", str);
// 	return(0);
// }
