/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:37:47 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/29 13:30:34 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <unistd.h>

int	main(void)
{
	ft_isdigit('a');
	write(1, &"\n", 1);
	ft_isdigit('4');
	write(1, &"\n", 1);
	ft_isdigit('1');
	write(1, &"\n", 1);
	return (0);
}*/