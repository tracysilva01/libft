/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:44:41 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/22 15:20:35 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*#include <unistd.h>

int	main(void)
{
	ft_isascii('a');
	write(1, &"\n", 1);
	ft_isascii('Z');
	write(1, &"\n", 1);
	ft_isascii('1');
	write(1, &"\n", 1);
	return (0);
}
*/