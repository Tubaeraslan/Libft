/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:01:27 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 18:11:50 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//src nin n kadar değerini alıp dst ye kopyalar(unsigned char a dönüştürür)

//üst üste binen bellek bölgelerini doğru şekilde kopyalar verilerin kaybolmasını önler

void *ft_memmove(void *dst, const void *src, size_t len){

	if (!dst && !src)
		return (NULL);
	if (dst < src)    // dest src den bellek olarak öndeyse herhnagi bir üst üste binme riski yok
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	return (dst);
}

int main(int argc, char const *argv[])
{
    char a[5];
    char b[4]="tuba";
    ft_memmove(a,b,3);
    printf("%s \n",a);

    int c[5]={0,0,0,0,0};
    int d[5]={1,2,3,4,5};
    ft_memmove(c,d,20);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",c[i]);
    }
    
    return 0;
}
