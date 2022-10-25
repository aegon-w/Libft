/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:05 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/23 15:57:20 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!p)
		return (0);
	while (*src)
		p[i++] = *src++;
	p[i] = '\0';
	return ((char *)p);
}
