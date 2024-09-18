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
