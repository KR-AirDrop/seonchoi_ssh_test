/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 16:20:00 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/10 17:56:23 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_count(char const *s, char c)
{
	size_t	num;
	size_t	i;

	num = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			num++;
		while (s[i] != c && s[i + 1])
			i++;
		i++;
	}
	return (num);
}

size_t		ft_length(const char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i++])
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{

}

int		main(void)
{
	char const *str = "   Hello W orld !!   ";
	char c = ' ';

	printf("%ld\n", ft_count(str, c));
	return (0);
}