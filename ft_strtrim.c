/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:08:33 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/21 09:43:44 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search(char c, const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && search(s1[start], set))
		start++;
	end = ft_strlen((char *)s1);
	while (end > start && search(s1[end - 1], set))
		end--;
	p = malloc(sizeof(*s1) * (end - start + 1));
	if (p)
	{
		while (start < end)
			p[i++] = s1[start++];
		p[i] = '\0';
	}
	return ((char *)p);
}

// int main()
// {
//     char s[20]= "mboukelalenh";
//     char st[20] = "hm";
//     char *p = ft_strtrim(s, st);
//     printf("%s", p);
// }
