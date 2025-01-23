/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 16:36:47 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/23 17:22:56 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	else
		while ((s1[i] == s2[i]) && (i < n))
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
			++i;
		}
	if ((s1[i] == '\0') || (s2[i] == '\0'))
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}


#include <stdio.h>

int	main(void)
{
	char s1[5] = "hola";
	char s2[5] = "holo";
	int result;
	int result2;

	result = ft_strncmp("test\200", "test\0", 6);
	result2 = strncmp("test\200", "test\0", 6);
	printf("mi función es: %d", result);
	printf("la normal %d", result2);
	return (0);
}