/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-raev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:01:45 by tde-raev          #+#    #+#             */
/*   Updated: 2024/10/09 16:09:52 by tde-raev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int		ft_atoi(const char *str);
void    ft_bzero(char *str, int i);
void*   ft_calloc(size_t num, size_t size);
int		ft_isalnum(char c);
int		ft_isalpha(char c);
int		ft_isascii(int c);
int		ft_isdigit(char c);
int		ft_isprint(char c);
void	*ft_memchr(const void *ptr, int value, int num);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(char *dest, char *src, int n);
void	*ft_memmove(char *dest, char *src, int n);
void	*ft_memset(void *ptr, int value, size_t num);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s);
int		ft_strlcpy(char *dest, char *src, int i);
size_t 	ft_strlen(char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif

