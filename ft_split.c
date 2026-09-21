/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialnuman <ibrahim.alnuman@learner.42.te    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:42:53 by ialnuman          #+#    #+#             */
/*   Updated: 2026/09/21 13:42:53 by ialnuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static void	*free_array(char **strs, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

static char	**fill_words(char const *s, char c, char **strs)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			strs[i] = ft_substr(s, 0, len);
			if (!strs[i])
				return (free_array(strs, i));
			s += len;
			i++;
		}
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	strs = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	return (fill_words(s, c, strs));
}
