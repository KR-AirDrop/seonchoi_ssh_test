/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 17:17:33 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/11 17:27:39 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	char *str;

	if (start == 0 || ft_strlen(s) < start)
		return (NULL);
	start--;
	i = 0;
	if (!(str = (char *)malloc(sizeof(char)) * len))
		return (NULL);
	while (s[start])
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}