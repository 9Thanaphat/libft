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
