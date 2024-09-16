/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttangcha <ttangcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 18:26:34 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/07 19:09:13 by ttangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	dstsize;
	unsigned int	srcsize;
	unsigned int	i;
	unsigned int	j;

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
