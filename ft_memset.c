/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:46:14 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 17:53:57 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//c yi(unsigned char a çevirip) len kadar alıp b nin içine kopyalar

void *ft_memset(void *b, int c, size_t len){
    size_t i;

    i = 0;
    while (i < len)
    {
        ((unsigned char*)b)[i]=c;
        i++;
    }
    return b;
}

/*
int main(int argc, char const *argv[])
{
    char a[]="tuba";
    ft_memset(a,'a',3);
    printf("%s \n",a);

    int b[]={1,2,3,4};
    ft_memset(b,0,16);
    for (int i = 0; i < 4; i++)
    {
        printf("%d \n",b[i]);
    }
    
    return 0;
}
*/
