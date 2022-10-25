/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:55:15 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/22 18:44:06 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*p;

	p = malloc(size * count);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
