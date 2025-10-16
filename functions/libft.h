/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piero-pc <piero-pc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:43:57 by piero-pc          #+#    #+#             */
/*   Updated: 2025/10/16 18:58:56 by piero-pc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *str);

void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);

char *ft_strchr (const char *str, int c);
char *ft_strrchr(const char *s, int c);


int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(char c);
int	ft_isdigit(char c);
int	ft_isprint(char c);
int	ft_toupper(char c);
int	ft_tolower(char c);
int	ft_strncmp(char c);
int ft_atoi(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t count)


#endif