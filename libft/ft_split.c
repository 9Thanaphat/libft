/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thanaphat <thanaphat@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:44:46 by ttangcha          #+#    #+#             */
/*   Updated: 2024/09/16 20:30:43 by thanaphat        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_split(char **split, int word)
{
	int	i;

	i = 0;
	while (i < word)
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

static int	start_word(char const *s, char c, int wordnum)
{
	int	i;
	int	count;
	int	trig;

	i = 0;
	count = 0;
	trig = 0;
	while (s[i])
	{
		if (s[i] != c && trig == 0)
		{
			trig = 1;
			count++;
		}
		else if (s[i] == c && trig == 1)
			trig = 0;
		if (count == wordnum)
			break ;
		i++;
	}
	return (i);
}

static int	word_len(char const *s, char c, int wordnum)
{
	int	i;
	int	len;
	int	count;
	int	trig;

	i = 0;
	len = 0;
	count = 0;
	trig = 0;
	while (s[i])
	{
		if (s[i] != c && trig == 0)
		{
			trig = 1;
			count++;
		}
		else if (s[i] == c && trig == 1)
			trig = 0;
		if (count == wordnum)
			if (s[i] != c)
				len++;
		i++;
	}
	return (len);
}

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	trig;

	i = 0;
	count = 0;
	trig = 0;
	while (s[i])
	{
		if (s[i] != c && trig == 0)
		{
			trig = 1;
			count++;
		}
		else if (s[i] == c && trig == 1)
			trig = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = -1;
	j = -1;
	word = count_word(s, c);
	split = malloc ((word + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (++i < word)
	{
		split[i] = malloc((word_len(s, c, (i + 1)) + 1) * sizeof(char));
		if (!split[i])
			return (free_split(split, i));
		while (++j < word_len(s, c, (i + 1)))
			split[i][j] = s[start_word(s, c, i + 1) + j];
		split[i][j] = '\0';
		j = -1;
	}
	split[i] = NULL;
	return (split);
}

/*int	main(void)
{
	char *str = "Hello,,,,Test,Str,,,Spliz";
	char d = ',';
	int	i;

	//printf("count word---> %d\n", count_word(str, d));
	//printf("test word len ---> %d\n", word_len(str, d,4));
	//printf("test start word ---> %d\n", start_word(str, d,4));

	i = 0;
	while (i < count_word(str,d))
	{
		printf("--> %s\n",ft_split(str, d)[i]);
		i++;
	}
	return (0);
}*/
