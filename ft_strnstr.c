/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:13:14 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 19:20:08 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//needle dizisini haystack dizisinin içinde arar ve bukunduğu ilk yeri verir

char *ft_strnstr(const char *haystack, const char *needle, size_t len){
    size_t i;
    size_t n;

    n = ft_strlen(needle);

    if (n==0)
    {
        return (char *)haystack;
    }
    if (len == 0)
    {
        return NULL;
    }
    i = 0;
    while (i <= len - n && haystack[i]!='\0')
    {
        if (ft_strncmp(&haystack[i],needle,n)==0)
        {
            return (char *)&haystack[i];
        }
        i++;
    }
    return NULL;
}

int main(int argc, char const *argv[])
{
    char a[]="hello";
    char b[]="ll";
    printf("%s \n",ft_strnstr(a,b,5));
    return 0;
}
