/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 13:12:34 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/26 15:24:36 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    char    *ptr;

    if (nmemb == 0)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    bzero(ptr, nmemb * size);
    return ((void *)ptr);
}