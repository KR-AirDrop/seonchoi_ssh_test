/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi </var/mail/seonchoi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:41:59 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/19 07:59:36 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

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

char			**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	int		len;
	char	**split;

	start = 0;
	end = 0;
	len = 0;
	if (!s)
		return (NULL);
	if (!(split = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1))))
		return (NULL);
	while (s[start])
	{
		if (s[end] != c)
		{
			start = end;
			while (s[end] != c && s[end])
				end++;
			len = end - start;
			if (!(*split = (char *)malloc(sizeof(char) * (len + 1))))
				return (NULL);
			*split = ft_substr(s, start, len);
			split++;
		}

	}

}

int				main(void)
{
	char *s = "      w or d count 5   ";
	char c = ' ';

	printf("%d", ft_word_count(s, c));
	return (0);
}
