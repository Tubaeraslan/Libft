/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 20:58:03 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 21:12:03 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len){
    char *str;
    char *src;

    src=(char *)s;
    if (!src)
    {
        return NULL;
    }
    if (start >= ft_strlen(s))
    {
        str=(char *)malloc(sizeof(char));
        if (!str)
        {
            return NULL;
        }
        *str='\0';
    }
    else{
        if (ft_strlen(s)-start < len)
        {
            len = ft_strlen(s) - start;
        }
        str = (char *)malloc((sizeof(char)*len)+1);
        if (!str)
        {
            return NULL;
        }
        ft_strlcpy(str,(char *)(s+start),len+1);
    }
    return str;
}

int main(int argc, char const *argv[])
{
    char a []="tubaeraslan";
    printf("%s \n",ft_substr(a,5,9));
    
    return 0;
}
