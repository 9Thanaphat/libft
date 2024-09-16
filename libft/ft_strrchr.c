/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttangcha <ttangcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:29:33 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/16 12:07:33 by ttangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

// #include <string.h>

// int	main(void)
// {
// 	printf("strrchr returned value ----> %s \n", strrchr("Helloe",'l'));
// 	printf("ft_strrchr returned value ----> %s \n", ft_strrchr("Helloe",'l'));
// 	return (0);
// }
