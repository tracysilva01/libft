/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:56:16 by trsilva-          #+#    #+#             */
/*   Updated: 2025/02/01 17:20:53 by trsilva-         ###   ########.fr       */
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
		if (s[i] != c)
		{
			++count;
			while (s[i] && s[i] != c)
				++i;
		}
		else
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
    char **strings = ft_split("hello!zzzzzzzz", 'z');
    
    // Imprimir el resultado
    for (int i = 0; strings[i] != NULL; i++) {
        printf("Palabra %d: '%s'\n", i, strings[i]);
        free(strings[i]);  // Liberar cada palabra después de usarla
    }

    free(strings);  // Liberar el array de strings
    return 0;
}
 /*Reserva (utilizando malloc(3)) un array de strings
 resultante de separar la string ’s’ en substrings
 utilizando el caracter ’c’ como delimitador. El
 array debe terminar con un puntero NULL*/

/*
Errors found:
For ft_split, in /home/trsilva-/francinette/tests/libft/fsoares/test_split.c:

Error in test 1: ft_split("hello!", 32:' '): not enough memory allocated, needed: 7, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8dc8d0
Error in test 1: ft_split("hello!", 32:' '): 
Memory leak: 0x56375d8dc910 - 4096 bytes
You failed to free the memory allocated at:
Error in test 2: ft_split("xxxxxxxxhello!", 120:'x'): not enough memory allocated, needed: 7, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8dd920
Error in test 3: ft_split("hello!zzzzzzzz", 122:'z'): not enough memory allocated, needed: 7, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8dd960
Error in test 4: ft_split("\t\t\t\thello!\t\t\t\t", 9:'\t'): not enough memory allocated, needed: 7, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8dd9a0
Error in test 7: ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", 94:'^'): not enough memory allocated, needed: 2, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8ddaa0
Error in test 7: ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", 94:'^'): not enough memory allocated, needed: 4, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8ddac0
Error in test 7: ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", 94:'^'): not enough memory allocated, needed: 2, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8ddae0
Error in test 7: ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", 94:'^'): not enough memory allocated, needed: 4, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8ddb00
Error in test 8: ft_split("nonempty", 0:'\0'): not enough memory allocated, needed: 9, reserved: 0
Could not find the corresponding allocation or the pointer 0x56375d8ddae0

*/