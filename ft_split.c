/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:56:16 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/28 15:41:10 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_strings(char const *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {  
        if (s[i] == c && (s[i+1] != c && s[i+1] != '\0'))
            ++count;
        ++i;
    }
    return (count);
}

char fill_words()
{

}

char **ft_split(char const *s, char c)
{
    char **strings;
    
    strings = malloc((count_strings(s, c) + 1) * sizeof(* char));
    
}

/* Reserva (utilizando malloc(3)) un array de strings
 resultante de separar la string ’s’ en substrings
 utilizando el caracter ’c’ como delimitador. El
 array debe terminar con un puntero NULL*/

