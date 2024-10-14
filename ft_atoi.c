/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:27:24 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 19:27:41 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int sign;
    int num;

    sign = 1;
    num = 0;
    while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ')
        str++;
    if (*str == '-')
    {
        sign = sign * -1;
        str++;
    }
    else if (*str == '+')
        str++;
    if (*str == '-' || *str == '+')
        return (0);
    while (*str >= '0' && *str <= '9')
    {
        num = (num * 10);
        num = num + (*str - '0');
        str++;
    }
    return (num * sign);
}

int main(int argc, char const *argv[])
{
    char a []= "   -438h45";
    printf("%d \n",ft_atoi(a));
    return 0;
}
