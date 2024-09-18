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
