/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:22 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/18 11:08:24 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	len;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// char f(unsigned int i, char c)
// {
//     (void)i;
// 	char str;
// 	str = c + 1;
// 	return (str);
// }

// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, *f);
// 	printf("%s\n", str2);
// }
