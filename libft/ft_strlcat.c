/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanaphat <thanaphat@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:26:34 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/17 19:02:45 by thanaphat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (size <= dstsize)
		return (size + srcsize);
	i = 0;
	while (src[i] != '\0' && (dstsize + 1) < size)
	{
		dst[dstsize] = src[i];
		i++;
		dstsize++;
	}
	dst[dstsize] = '\0';
	return (j + srcsize);
}
