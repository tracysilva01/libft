/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trsilva- <trsilva-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 14:19:31 by trsilva-          #+#    #+#             */
/*   Updated: 2025/01/24 16:09:19 by trsilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// functions
int		ft_atoi(const char *str);
void	*ft_bzero(void *dest, size_t num);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
void	*ft_memchr(const void *ptr, int ch, size_t n);
/*int		ft_memcmp(const void *s1, const void *s2, size_t n);*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memset(void *dest, int c, size_t num);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_putchar_fd(char c, int fd);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_strlcpy(char *dst, const char *src, size_t size);

#endif