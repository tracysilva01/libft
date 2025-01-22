/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:44:19 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/22 15:20:22 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/*#include <unistd.h>
int	main(void)
{
	ft_isalnum('a');
	write(1, &"\n", 1);
	ft_isalnum('!');
	write(1, &"\n", 1);
	ft_isalnum('1');
	write(1, &"\n", 1);
	return (0);
}*/