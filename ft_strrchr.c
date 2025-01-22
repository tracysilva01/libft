/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:51:27 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/22 16:26:07 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	--i;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		--i;
	}
	if ((char)c == '\0')
	{
		return ((char *)s + i);
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char    string[15] = "buenas tardess";
	int     ch = 'e';
	int     n = 5;
	char    *a;

	a = ft_strrchr(string, ch);
	printf("%s", a);
	return(0);
}*/