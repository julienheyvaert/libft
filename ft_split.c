/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jheyvaer <jheyvaer@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 17:33:22 by jheyvaer          #+#    #+#             */
/*   Updated: 2026/04/20 17:54:30 by jheyvaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_words(char const *str, char c)
{
	unsigned int	in_word;
	unsigned int	count;

	if (!str)
		return (0);
	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == c)
			in_word = 0;
		if (*str != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static size_t	word_length(char const *s, char c)
{
	size_t	length;

	length = 0;
	while (*s && *s != c)
	{
		length++;
		s++;
	}
	return (length);
}

static void	free_array(char **array, unsigned int i)
{
	while (i > 0)
		free(array[--i]);
	free(array);
}

static void	fill_words_tab(char ***words, char const *s, char c)
{
	unsigned int	in_word;
	unsigned int	i;

	in_word = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		if (*s != c && !in_word)
		{
			in_word = 1;
			(*words)[i] = ft_substr(s, 0, word_length(s, c));
			if (!(*words)[i])
			{
				free_array(*words, i);
				*words = NULL;
				return ;
			}
			i++;
		}
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**words;
	unsigned int	words_number;

	if (!s)
		return (NULL);
	words_number = count_words(s, c);
	words = malloc(sizeof(char *) * (words_number + 1));
	if (!words)
		return (NULL);
	words[words_number] = NULL;
	fill_words_tab(&words, s, c);
	if (!words)
		return (NULL);
	return (words);
}

// int	main(void)
// {
// 	char			**array;
// 	unsigned int	i;

// 	array = ft_split("Une petite phrase", ' ');

// 	i = 0;
// 	while (array[i])
// 	{
// 		printf("%s\n", array[i++]);
// 	}
// 	free_array(array, i);
// 	return (0);
// }
