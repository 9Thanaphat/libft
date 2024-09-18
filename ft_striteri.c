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
