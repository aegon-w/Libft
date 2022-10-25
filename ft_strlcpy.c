/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:16 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/23 15:59:42 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (len > i + 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (len != 0)
		dest[i] = '\0';
	return (j);
}
