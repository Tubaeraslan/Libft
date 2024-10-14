/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:12:43 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 21:24:01 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
    char *result;
    int i;
    int j;
    size_t total;

    if (!s1 || !s2)
    {
        return NULL;
    }
    
    i = 0;
    total=ft_strlen(s1)+ft_strlen(s2);
    result=(char *)malloc((total*sizeof(char))+1);

    if (!result)
    {
        return NULL;
    }
    while (s1[i]!='\0')
    {
        result[i]=((unsigned char *)s1)[i];
        i++;
    }
    j = 0;
    while (s2[j]!='\0')
    {
        result[i]=((unsigned char *)s2)[j];
        i++;
        j++;
    }
    result[i]='\0';
    return result;
}

int main(int argc, char const *argv[])
{
    char a[]="hello";
    char b[]="world";
    printf("%s \n",ft_strjoin(a,b));
    return 0;
}
