#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	if (!dest && !src)
		return (dest);
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	while (n)
	{
		*ptrd++ = *ptrs++;
		n--;
	}
	return (dest);
}
// #include <string.h>

// int	main(void)
// {
// 	char src[] = "hello";
// 	char dest[] = " ";

// 	ft_memcpy(dest, src, sizeof(src));
// 	printf("%s\n", dest);
// 	return (0);
// }
