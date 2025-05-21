/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smedenec <smedenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 23:02:07 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/21 02:03:02 by smedenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len_int(int	n)
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
	char	*str_nbr;
	int		len;
	int		neg;

	neg = 0;
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
int	main(void)
{
	int		nbr;
	char	*str;

	nbr = 519;
	str = ft_itoa(nbr);
	printf("le int = %s\n", str);
	return(0);
}
