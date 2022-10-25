/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:36 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/22 11:33:49 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[++i])
	{
		if (i >= start && j < len)
		{
			p[j] = s[i];
			j++;
		}
	}
	p[j] = '\0';
	return (p);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*s;
// 	char	*p;

// 	s = "tripouille";
// 	p = ft_substr(s, 2, 12);
// 	printf("%s\n", p);
// }
