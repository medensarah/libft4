/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:45:00 by smedenec          #+#    #+#             */
/*   Updated: 2025/05/25 06:15:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_a_space(char *str, int i)
{
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	num;

	num = 0;
	sign = 1;
	i = 0;
	i = is_a_space(str, i);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1 ;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = 10 * num;
		num = num + (str[i] - 48);
		i++;
	}
	return (num * sign);
}
// int	main(void)
// {
// 	printf("mine = %d\natoi = %d\n", ft_atoi("  --27r7"), atoi("   --27r7"));
// }
