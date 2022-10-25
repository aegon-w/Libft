/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:10 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/23 15:18:47 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (i < len && s1[j])
	{
		p[i++] = s1[j++];
	}
	j = 0;
	while (i < len && s2[j])
	{
		p[i++] = s2[j++];
	}
	p[i] = '\0';
	return ((char *)p);
}
