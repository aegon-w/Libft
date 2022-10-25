/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:06:49 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/23 14:35:35 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (src > dest)
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (len--)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dest);
}
