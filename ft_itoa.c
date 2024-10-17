/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:16:38 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/17 18:32:02 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_len(int n, int sign){
    int i;

    i = 0;
    if (n ==0)
    {
        i = 1;
    }
    while (n !=0)
    {
        i++;
        n = n / 10;
    }
    if (sign < 0)
    {
        i++;
    }
    return (i);
}

char *ft_itoa(int n){
    char *str;
    int num;
    int sign;
    int len;
    
    num = n;
    sign = 1;
    if (num < 0)
    {
        sign = -1;
    }
    num = sign * num;
    len = ft_len(num,sign);
    str = (char *)malloc(sizeof(char) * len+1);
    if (!str)
    {
        return 0;
    }
    str[len]='\0';
    while (len >=0)
    {
        str[len]=(num%10)+'0';
        num=num/10;
        len--;
    }
    if (sign==-1)
    {
        str[0]='-';
    }
    return str;
}

int main(int argc, char const *argv[])
{
    printf("%s \n",ft_itoa(-345));
    return 0;
}
