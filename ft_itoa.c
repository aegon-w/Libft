/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:58:20 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/19 08:53:02 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	leng;

	leng = 0;
	if (n <= 0)
		leng++;
	while (n)
	{
		leng++;
		n = n / 10;
	}
	return (leng + 1);
}

char	*ft_itoa(int nb)
{
	long	n;
	int		lent;
	char	*p;

	n = nb;
	lent = len(n);
	p = malloc(lent);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	else if (n == 0)
		p[0] = '0';
	lent--;
	p[lent--] = '\0';
	while (n > 0)
	{
		p[lent] = n % 10 + 48;
		lent--;
		n = n / 10;
	}
	return (p);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*p;

// 	p = ft_itoa(0);
// 	printf("%s", p);
// }
