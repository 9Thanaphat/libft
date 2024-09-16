/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttangcha <ttangcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:38:08 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/15 18:38:10 by ttangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
// void myfunc(unsigned int i, char *c) //my function
// {
// 	printf("%d \n", i);
// 	if (c[i] >= 'a' && c[i] <= 'z')
// 		c[i] -= 32;
// }

// int	main(void)
// {
// 	char str[] = "Hello World";
// 	ft_striteri(str, myfunc);
// 	printf("%s \n", str);
// }
