/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:48:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 15:53:56 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	unsigned int	j;

	if (!s || start >= strlen(s))
		return (ft_calloc(1, 1));
	substring = malloc(sizeof(char) * (strlen(s) - start + 1));
	i = start;
	j = 0;
	if (!substring)
		return (NULL);
	while (s[i] && (strlen(s) - start))
	{
		substring[j] = s[i];
		++i;
		++j;
	}
	substring[j] = '\0';
	return (substring);
}

/*
#include <stdio.h>

int	main(void)
{
	char            *sub_s;

	sub_s = ft_substr("hola", 0, 18446744073709551615);
	printf("%s", sub_s);
	free(sub_s);
	return (0);
}*/