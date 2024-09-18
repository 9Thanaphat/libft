#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*ptr++ = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char str[] = "Hello!";
// 	ft_memset(str, '#', 5);
// 	printf("----- > %s \n",str);
// }
