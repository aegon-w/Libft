/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:31 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/23 15:59:32 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	if ((char)c == 0)
		return ((char *)s + len);
	while (len-- > 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	}
	return (0);
}
