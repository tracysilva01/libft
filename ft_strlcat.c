/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:27:34 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/24 15:32:14 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    j = 0;
    while (i < strlen(dst))
    {
        dst[i] = dst[i];
        ++i;
    }
    while ((j < (size - 1)) && (src))
    {
        dst[i] = src[j];
        ++i;
        ++j;
    }
    dst[i] = '\0';
    return(strlen(dst));
}

#include <stdio.h>

int main(void)
{
    int a;
    int b;

    a = ft_strlcat("hola ", "anaaaa", 6);
    printf("%d", a);
    return (0);
}