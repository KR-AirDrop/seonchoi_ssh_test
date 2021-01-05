/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seonchoi <seonchoi@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:35:27 by seonchoi          #+#    #+#             */
/*   Updated: 2021/01/05 22:35:00 by seonchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	a;

	a = 0;
	while ((src[a]) && a + 1 < size)
	{
		dst[a] = src[a];
		a++;
	}
	if (size > 0)
		dst[a] = '\0';
	return (ft_strlen(src));
}
