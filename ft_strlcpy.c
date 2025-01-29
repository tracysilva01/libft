/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:57:09 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:36:21 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size < 1)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*

your strlcpy does works whe size < strlen(src)
Errors in strlcpy:
	/home/trsilva-/francinette/temp/libft/war-machine/tests/Part1_functions/ft_strlcpy
Test 3:
	ft_print_result(ft_strlcpy(dest, "lorem ipsum", 3));
	write(1, "\n", 1);
	write(1, dest, 15);
Expected (cat -e test03.output):
11$
lo^@rrr^@^@^@^@^@^@^@^@^@
Your result (cat -e user_output_test03):
2$
lo^@rrr^@^@^@^@^@^@^@^@^@
Test 4:
	ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
Expected (cat -e test04.output):
26$
lorem ipsum do^@
Your result (cat -e user_output_test04):
14$
lorem ipsum do^@


#include <stdio.h>

int	main(void)
{
	char a[] = "hola ";
	char b[] = "anaaa";
	int len;

	len = ft_strlcpy(a, b, 3);
	printf("%d", len);
	return (0);
}*/