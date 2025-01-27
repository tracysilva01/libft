/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:48:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/27 13:36:13 by trsilva-         ###   ########.fr       */
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
	if (start >= strlen(s))
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

/*#include <stdio.h>

int	main(void)
{
	char            *sub_s;

	sub_s = ft_substr("01234", 10, 10);
	printf("%s", sub_s);
	free(sub_s);
	return (0);
}*/