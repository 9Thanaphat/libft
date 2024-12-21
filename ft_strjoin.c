#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;
	int		i;
	int		j;

	strjoin = (char *) malloc (ft_strlen(s1) + ft_strlen(s2) * sizeof(char));
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
