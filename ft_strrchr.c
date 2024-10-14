/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:58:17 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 18:59:47 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//c nin s içinde bulunduğu son yeri verir

char *ft_strrchr(const char *s, int c){
    int i;

    i = ft_strlen(s);
    while (i>=0)
    {
        if (s[i]==(char)c)
        {
            return (char*)(s+i);
        }
        i--;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char a[]="tubatur";
    char x='t';
    printf("%p",ft_strrchr(a,x));
    return 0;
}
