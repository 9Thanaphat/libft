#include "libft.h"

static int	ft_strjoinlen(char const *s1, char const *s2)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s1[i])
	{
		i++;
		c++;
	}
	i = 0;
	while (s2[i])
	{
		i++;
		c++;
	}
	return (c);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		i;
	int		j;

	strjoin = (char *) malloc (ft_strjoinlen(s1, s2) + 1 * sizeof(char));
	if (strjoin == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		strjoin[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		strjoin[j] = s2[i];
		i++;
		j++;
	}
	strjoin[j] = '\0';
	i = 0;
	return (strjoin);
}
//#include <stdio.h>

// int	main(void)
// {
// 	printf("return : %s \n",ft_strjoin("42", ""));
// }
