/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:48:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/26 13:12:28 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	i;
	unsigned int	j;

	substring = malloc(sizeof(char) * (len + 1));
	i = start;
	j = 0;
	if (!s)
		return (NULL);
	if (!substring)
		return (NULL);
	while (s[i] && (j < len))
	{
		substring[j] = s[i];
		++i;
		++j;
	}
	substring[j] = '\0';
	return (substring);
}
/*
#include <unistd.h>

int	main(void)
{
	char            *sub_s;

	sub_s = ft_substr("buenas tardes", 2, 6);
	write(1, sub_s, 6);
	free(sub_s);
	return (0);
}*/