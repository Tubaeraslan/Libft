/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:51:31 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 17:51:47 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//s nin içine n kadar boş byte gönderir

void ft_bzero(void *s, size_t n){

    ft_memset(s,'\0',n);
}

int main(int argc, char const *argv[])
{
    char a []="hello";
    ft_bzero(a,2);
    for (int i = 0; i < 5; i++)
    {
        if (a[i]=='\0')
        {
            printf("\\0 \n");
        }
        else{
            printf("%c \n",a[i]);
        }
        
    }

    int b[5]={1,2,3,4,5};
    ft_bzero(b,12);
    for (int i = 0; i < 5; i++)
    {
        if (b[i]==0)
        {
            printf("0 \n");
        }
        else{
            printf("%d \n",b[i]);
        }
    }
    

    
    return 0;
}
