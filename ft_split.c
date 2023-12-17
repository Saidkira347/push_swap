/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souhanat <souhanat@student.1337.ma >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:23:16 by souhanat           #+#    #+#             */
/*   Updated: 2023/06/02 22:34:39 by souhanat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *str, char c)
{
	int	n;
	int	count;

	n = 0;
	count = 0;
	while (str[n])
	{
		while (str[n] == c)
			n++;
		if (str[n])
		{
			while (str[n] != c && str[n])
				n++;
			count++;
		}
	}
	return (count);
}

static int	count_characters(char *str, char c, int start)
{
	int	count;

	count = 0;
	while (str[start] && str[start] != c)
	{
		start++;
		count++;
	}
	return (count);
}

static char	**ft_copy(char **str, char *s, char c, int counter_words)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < counter_words)
	{
		k = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str[i][k++] = s[j++];
		str[i][k] = 0;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	if (s)
	{
		tab = (char **)malloc((count_words(s, c)) * sizeof(char *) + 1);
		if (!tab)
			return (0);
		while (i < count_words(s, c))
		{
			j = 0;
			while (s[j] == c)
				j++;
			tab[i++] = (char *)malloc(count_characters(s, c, j) + 1);
			if (!s[i - 1])
				return (0);
			j += count_characters(s, c, j);
		}
		ft_copy(tab, s, c, count_words(s, c));
		return (tab);
	}
	return (0);
}
