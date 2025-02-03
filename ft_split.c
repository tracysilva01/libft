/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:56:16 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/03 17:13:29 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	count_strings(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			++count;
			while (s[i] && (s[i] != c))
				++i;
		}
		else
			++i;
	}
	return (count);
}

char	*fill_words(char const *s, char c, int last_end)
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
	word = ft_calloc((new_end - start + 1), sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < new_end)
	{
		word[i] = s[start];
		++start;
		++i;
	}
	return (word);
}

void	my_free(char **string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		free(string[i]);
		++i;
	}
	free(string);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		last_end;
	int		i;
	char	*word;

	i = 0;
	last_end = 0;
	if (!s)
		return (NULL);
	strings = ft_calloc((count_strings(s, c) + 1), sizeof(char *));
	if (!strings)
		return (NULL);
	while ((word = fill_words(s, c, last_end)) != NULL && i < count_strings(s,
			c))
	{
		strings[i] = word;
		while (s[last_end] && s[last_end] == c)
			++last_end;
		last_end += ft_strlen(word);
		++i;
	}
	if (!word)
	{
		my_free(strings);
		return (NULL);
	}
	else
		free(word);
	strings[i] = NULL;
	return (strings);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {

	char *s = "      split       this for   me  !       ";

	char **result = split(s, ' ');
	if (!result)
			return(1);
	return(0);

	char **strings = ft_split("hello!zzzzzzzz", 'z');

	// Imprimir el resultado
	for (int i = 0; strings[i] != NULL; i++) {
		printf("Palabra %d: '%s'\n", i, strings[i]);
		free(strings[i]);  // Liberar cada palabra después de usarla
	}

	free(strings);  // Liberar el array de strings
	return (0);
}

 Reserva (utilizando malloc(3)) un array de strings
 resultante de separar la string ’s’ en substrings
 utilizando el caracter ’c’ como delimitador. El
 array debe terminar con un puntero NULL
*/