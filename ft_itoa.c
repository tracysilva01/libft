/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:36:26 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/27 16:53:20 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

int	ft_lencount(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		++len;
	}
	return (len);
}

/*char	*ft_itoa(int n)
{
	char	*string;
	int		len;
	int		i;
	int		n_orig;

	i = 0;
	n_orig = n;
	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (ft_isnegative(n) != 0)
		n = -n;
	len = ft_lencount(n);
	if (ft_isnegative(n_orig) != 0)
		len = len + 1;
	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	while (n > 0)
	{
		string[len - i - 1] = ((n % 10) + '0');
		n = (n / 10);
		++i;
	}
	if (ft_isnegative(n_orig) != 0)
		string[0] = '-';
	string[len] = '\0';
	return (string);
}*/

/*char	*ft_itoa(int n)
{
	char	*string;
	int		len;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (n == 0 || n == -0)
		return (strdup("0"));
	len = ft_lencount(n);
	if (ft_isnegative(n) != 0)
	{
		len = len + 1;
		n = -n;
	}
	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	while (n > 0)
	{
		string[len - i - 1] = ((n % 10) + '0');
		n = (n / 10);
		++i;
	}
	if (ft_isnegative(n) != 0)
		string[0] = '-';
	string[len] = '\0';
	return (string);
}*/

void	ft_writestr(char *str, int n, int len)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		str[len - i - 1] = ((n % 10) + '0');
		n = (n / 10);
		++i;
	}
}

char	*ft_itoa(int n)
{
	char	*string;
	int		len;

	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (n == 0 || n == -0)
		return (strdup("0"));
	len = ft_lencount(n);
	if (ft_isnegative(n) != 0)
		len = len + 1;
	string = malloc((len + 1) * sizeof(char));
	if (!string)
		return (0);
	ft_writestr(string, n, len);
	string[len] = '\0';
	return (string);
}

/*
#include <stdio.h>

int	main(void)
{
	char *aber;

	aber = ft_itoa(-5464);
	printf("%s", aber);
	//printf("%d", -2/10);
	free(aber);
	return (0);
}*/