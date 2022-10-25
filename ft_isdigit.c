/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:07:35 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/18 12:42:42 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d \n%d", ft_isdigit('a'), isdigit('a'));
// }
