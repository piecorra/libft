/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piero-pc <piero-pc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:52:48 by piero-pc          #+#    #+#             */
/*   Updated: 2025/10/16 18:14:48 by piero-pc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libt.h"

int ft_atoi(const char *str)
{
    size_t  i;
    int sign;
    long    result;

    result = 0;
    sign = 1;
    i = 0;

    if(!str)
        return(0);
    while (str[i] == ' ' || str[i] >= 9 && str[i] <=13)
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+')
    {   
        if(str[i] == '-')
            sign = sign * (-1);
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return((int)(result * sign));
}