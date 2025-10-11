/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piecorra <piecorra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:49:26 by piecorra          #+#    #+#             */
/*   Updated: 2025/10/11 20:01:31 by piecorra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t	i;

	i = ft_strlen(s);
	while (s[i] >= 0)
	{
		i--;
		if(s[i] == (char)c)
			return ((char*)(s + 1));
	}
	if (s[i] == (char)c)
		return((char*)(s + 1));
	return (NULL);
}