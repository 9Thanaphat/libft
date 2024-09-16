/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttangcha <ttangcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:04:28 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/16 11:18:20 by ttangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (void *)s;
	while (n)
	{
		if (*ptr == (char) c)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *ptr;

// 	ptr = ft_memchr("Hello World!", 'W', 12);
// 	printf("%s \n",ptr);
// 	return(0);
// }
