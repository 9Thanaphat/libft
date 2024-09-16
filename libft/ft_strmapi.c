/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttangcha <ttangcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:33:17 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/15 18:38:24 by ttangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fstr;

	i = 0;
	fstr = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!fstr)
		return (NULL);
	while (s[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
// char myfunc(unsigned int i, char c) //my function
// {
// 	printf("%d \n", i);
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return(c);
// }

// int	main(void)
// {
// 	printf("%s \n", ft_strmapi("Hello world!", myfunc));
// }
