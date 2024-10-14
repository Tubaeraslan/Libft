/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:01:32 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 19:09:36 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s nin ilk n byte ındaki ilk c yi bulur

void *ft_memchr(const void *s, int c, size_t n){
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
        {
            return (void *)(s+i);
        }
        i++;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char a[]="tuba";
    char b='b';

    char *result= ft_memchr(a,98,4);

    printf("%s \n",result);


    int c[]={1,2,3,4,5};
    int d=3;
    int *rest=ft_memchr(c,2,20);
    printf("%d \n",*rest);
    
    return 0;
}
