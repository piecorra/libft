/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piecorra <piecorra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:23:10 by piecorra          #+#    #+#             */
/*   Updated: 2025/10/11 19:39:54 by piecorra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr (const char *str, int c)
{
    size_t i;

    if (!str)
        return (NULL);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == (char)c)
            return ((char*)(str + i));
        i++;
    }
    if (str[i] == (char)c)
        return((char*)(str + i));
    return(NULL);
}

#include <stdio.h>

int main (void)
{
    char cadena[] = "Hello World";
    char c = 'e';
    
    printf("%s\n, cadena");
    printf("Find: %s\n", ft_strchr(cadena, c));
}