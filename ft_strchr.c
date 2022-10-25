/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:02 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/18 11:08:04 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char src[]="tripoulle";
//     printf("%s", ft_strchr(src, 'z'));
// }
