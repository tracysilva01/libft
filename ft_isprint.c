/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:44:28 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/22 15:20:28 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*#include <unistd.h>
int	main(void)
{
	ft_isprint('a');
	write(1, &"\n", 1);
	ft_isprint('Z');
	write(1, &"\n", 1);
	ft_isprint(7);
	write(1, &"\n", 1);
	return (0);
}*/