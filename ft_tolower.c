/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:51:49 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/22 15:21:05 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int c;

	c = 'R';
	c = ft_tolower(c);
	printf("%c", c);
	return (0);
}*/