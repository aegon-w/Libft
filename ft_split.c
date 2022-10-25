/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-boukel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:07:16 by m-boukel          #+#    #+#             */
/*   Updated: 2022/10/20 10:45:28 by m-boukel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		word;
	char	**strs;
	int		size;
	int		j;

	i = 0;
	j = -1;
	word = ft_count_word(s, c);
	strs = (char **)malloc((word + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (++j < word)
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		strs[j] = ft_substr(s, i, size);
		if (!strs[j])
			return (ft_free(strs, j));
		i += size;
	}
	strs[j] = 0;
	return (strs);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		i;
// 	char	*s;
// 	char	**p;

// 	i = 0;
// 	s = "mh0am0med\0";
// 	p = ft_split(s, '0');
// 	while (i < 3)
// 	{
// 		printf("%s\n", p[i++]);
// 	}
// }
