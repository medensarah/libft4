/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 02:05:26 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/21 05:32:23 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_striteri(char *s, char (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}

// int	main(void)
// {
// 	char	str[] = "Hackathon";

// 	printf("le int = %s\n", str);
// 	return(0);
// }
