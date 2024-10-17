/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:55:05 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/17 19:04:04 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ex(unsigned int i,char *c){
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

void ft_striteri(char *s, void (*f)(unsigned int,char*)){
    unsigned int i;
    if (s)
    {
        i = 0;
        while (s[i])
        {
            f(i,&s[i]);
            i++;
        }
        
    }
}

int main(int argc, char const *argv[])
{
    char a[]="tuba";
    ft_striteri(a,ex);
    printf("%s \n",a);
    return 0;
}
