/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:04:06 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/22 20:41:36 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LONG_MAX 9223372036854775807

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	unsigned long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - 48;
		if (sign == 1 && res > LONG_MAX)
			return (-1);
		else if (sign == -1 && res > (unsigned long)LONG_MAX + 1)
			return (0);
		i++;
	}
	return ((int)res * sign);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	*s;

// 	s = "\e475";
// 	printf("%d", ft_atoi(s));
// }
