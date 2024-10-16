/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:25:55 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/16 18:11:51 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set){
    size_t len;
    char *result;
    
    while (*s1 && ft_strchr(set,*s1)!=0)
    {
        s1++;
    }
    len = ft_strlen(s1);

    while (len && s1[len -1] && ft_strchr(set,s1[len-1]) !=0)
    {
        len--;
    }
    result=(char *)malloc(sizeof(char)*(len +1));
    if (!result)
    {
        return 0;
    }
    ft_memcpy(result,s1,len);
    result[len]='\0';
    return result;
}

int main(int argc, char const *argv[])
{
    printf("%s \n",ft_strtrim("ahellhoh","a"));
    return 0;
}


