/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:22:26 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/17 19:02:35 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ex(unsigned int i,char c){
    if (i % 2 == 0 && c >= 'a' && c <= 'z') 
        c = c - 32;
    return c;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    char * result;
    unsigned int i;
    if (!s || !f)
    {
        return NULL;
    }
    result = (char *)malloc(sizeof(char) * (ft_strlen(s)+1));
    if (!result)
    {
        return NULL;
    }
    i = 0;
    while (s[i])
    {
        result[i]=f(i,s[i]);
        i++;
    }
    result[i]='\0';
    return result;
}

int main(int argc, char const *argv[])
{
    char a[]="tuba";
    char *b=ft_strmapi(a,ex);
    printf("%s \n",b);
    return 0;
}
