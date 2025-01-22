/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 16:20:47 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/22 15:20:49 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		++i;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char    string[15] = "buenas tardes";
	char    string2[5] = "hola";
	int     n = 4;

	ft_memcpy(string, string2, n);
	printf("%s", string);
	return(0);
}*/