/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:56:16 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/01 16:10:25 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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

char *fill_words(char const *s, char c, int last_end)
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
	word = calloc((new_end - start + 1), sizeof(char));
	if (!word)
		return (0);
	i = 0;
	while (start < new_end)
	{
		word[i] = s[start];
		++start;
		++i;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		last_end;
	int		i;
	char	*word;

	i = 0;
	last_end = 0;
	strings = malloc((count_strings(s, c) + 1) * sizeof(char *));
	while ((word = fill_words(s, c, last_end)) != NULL && i < count_strings(s, c))
	{
		strings[i] = word;
		while (s[last_end] && s[last_end] == c)
        {
            ++last_end;
        }
        last_end += strlen(word);
		++i;
	}
	strings[i] = NULL;
	return(strings);
}


int main() {
    /*const char *str = "...hola.....mundo....esto....es....un....test..";*/
    char **strings = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    
    // Imprimir el resultado
    for (int i = 0; strings[i] != NULL; i++) {
        printf("Palabra %d: '%s'\n", i, strings[i]);
        free(strings[i]);  // Liberar cada palabra después de usarla
    }

    free(strings);  // Liberar el array de strings
    return 0;
}

/* Reserva (utilizando malloc(3)) un array de strings
 resultante de separar la string ’s’ en substrings
 utilizando el caracter ’c’ como delimitador. El
 array debe terminar con un puntero NULL*/
