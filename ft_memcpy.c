/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:55:12 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 18:08:06 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//src nin n kadar değerini alıp dst ye kopyalar(unsigned char a dönüştürür) hata durumunda 0 döner

//unsigned char kullanmanın sebebi bellek adresleri ve byte değerierini temsil eden en uygun tür bellek işlemleri yaparken 1 byte harcar

void *ft_memcpy(void *dst, const void *src, size_t n){
    size_t i;

    if (dst == NULL && src == NULL)
		return (0);
    i = 0;
    while (i < n)
    {
        ((unsigned char*)dst)[i]=((unsigned char*)src)[i];
        i++;
    }
    return dst;
}

/*
int main(int argc, char const *argv[])
{
    char a[5];
    char b[]="melek";
    ft_memcpy(a,b,3);
    printf("%s \n",a);

    int c[5];
    int d[5]={1,2,3,4,5};
    ft_memcpy(c,d,20);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",c[i]);
    }
    
    return 0;
}
*/