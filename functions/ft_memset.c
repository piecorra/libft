/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piero-pc <piero-pc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:31:18 by piero-pc          #+#    #+#             */
/*   Updated: 2025/10/16 18:48:49 by piero-pc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *memset(void *str, int c, size_t n)
{
    unsigned char value;
    size_t  i;
    
    value = str;
    i = 0;
    while(i < n)
    {
        value[i] = str[i];
        i++;
    }
    return (str);
}