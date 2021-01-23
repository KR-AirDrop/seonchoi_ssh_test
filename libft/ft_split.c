/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:41:59 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/23 14:40:02 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_word_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

/*
** idx[0] = start, idx[1] = end, idx[2] = len, idx[3] = i (split index)
*/

char			**ft_split(char const *s, char c)
{
	int		idx[4];
	char	**split;

	idx[0] = 0;
	idx[1] = -1;
	idx[2] = 0;
	idx[3] = 0;
	if (!s)
		return (NULL);
	if (!(split = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1))))
		return (NULL);
	while (s[++idx[1]])
		if (s[idx[1]] != c)
		{
			idx[0] = idx[1];
			while (s[idx[1]] != c && s[idx[1]])
				idx[1]++;
			idx[2] = idx[1] - idx[0];
			split[idx[3]++] = ft_substr(s, idx[0], idx[2]);
			if (s[idx[1]] == 0)
				break ;
		}
	split[idx[3]] = NULL;
	return (split);
}
