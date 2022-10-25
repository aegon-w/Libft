/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:13 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/23 15:59:45 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	flen;
	size_t	tlen;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	tlen = j;
	flen = ft_strlen(src);
	if (size == 0 || size <= tlen)
		return (flen + size);
	while (src[i] != '\0' && i < size - tlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (tlen + flen);
}
