/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttangcha <ttangcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 15:13:51 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/16 12:21:46 by ttangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (char)c)
			return ((char *)ptr);
		ptr++;
	}
	if (*ptr == (char)c)
		return ((char *)ptr);
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	printf("returned value ----> %s \n", strchr("Hello",'e'));
// 	printf("returned value ----> %s \n", strrchr("Hello",'e'));

// 	printf("returned value ----> %s \n", ft_strchr("Hello",'e'));
// 	return (0);
// }
