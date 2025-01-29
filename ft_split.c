/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:56:16 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 15:19:10 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c && s[i + 1] != '\0'))
			++count;
		++i;
	}
	return (count);
}

char fill_words(char const *s, char c, int last_end)
{
	char	*word;
	int		start;
	int		new_end;
	int		i;

	i = last_end;
	while (s[i] && s[i] == c)
		++i;
    start = i;
	while (s[i] && s[i] != c)
		++i;
	new_end = i;
	word = malloc((new_end - start) * sizeof(char));
	if (!word)
		return (0);
	i = 0;
	while (word[i]) /* or (start < end)*/
	{ // substr
		word[i] = s[start]; //memcpy
		++start;
	}
	word[i] = '\0';
	return (word);
}

void	free_all(void);

char	**ft_split(char const *s, char c)
{
	char	**strings;

	strings = malloc((count_strings(s, c) + 1) * sizeof(char *));
}

/* Reserva (utilizando malloc(3)) un array de strings
 resultante de separar la string ’s’ en substrings
 utilizando el caracter ’c’ como delimitador. El
 array debe terminar con un puntero NULL*/
