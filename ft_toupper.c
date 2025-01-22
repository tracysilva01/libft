/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 12:52:00 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/22 15:21:08 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	int c;

	c = 'r';
	c = ft_toupper(c);
	printf("%c", c);
	return (0);
}*/
