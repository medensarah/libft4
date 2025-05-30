/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 23:02:07 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/30 15:14:18 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// # include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

static char	*ft_minint()
{
	char			*str_nbr;

	str_nbr = malloc(sizeof(char) * (10 + 1 + 1));
	if (str_nbr == NULL)
		return (NULL);
	str_nbr[10 + 1] = '\0';
	str_nbr[10] = '8';
	str_nbr[9] = '4';
	str_nbr[8] = '6';
	str_nbr[7] = '3';
	str_nbr[6] = '8';
	str_nbr[5] = '4';
	str_nbr[4] = '7';
	str_nbr[3] = '4';
	str_nbr[2] = '1';
	str_nbr[1] = '2';
	str_nbr[0] = '-';
	return (str_nbr);

}

static int	len_int(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str_nbr;
	unsigned int	len;
	unsigned int	neg;

	neg = 0;
	if (n == -2147483648)
		return (ft_minint());
	if (n < 0)
	{
		neg = 1;
		n = n * -1;
	}
	len = len_int(n);
	str_nbr = malloc(sizeof(char) * (len + neg + 1));
	if (str_nbr == NULL)
		return (NULL);
	str_nbr[len + neg] = '\0';
	while (len--)
	{
		str_nbr[len + neg] = n % 10 + 48;
		n = n / 10;
	}
	if (neg)
		str_nbr[0] = '-';
	return (str_nbr);
}
// int	main(void)
// {
// 	int		nbr;
// 	char	*str;

// 	nbr = -2147483648;
// 	str = ft_itoa(nbr);
// 	printf("le int = %s\n", str);
// 	return(0);
// }
