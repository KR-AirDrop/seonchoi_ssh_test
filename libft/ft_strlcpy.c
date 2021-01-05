/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:35:27 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/05 22:36:48 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	char	*f_string;
	char	*s_string;

	i = 0;
	f_string = dst;
	s_string = (char *)src;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (s_string[i] && size - 1 > i)
	{
		f_string[i] = s_string[i];
		i++;
	}
	f_string[i] = '\0';
	return (ft_strlen(s_string));
}
