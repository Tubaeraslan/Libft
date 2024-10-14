/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:39:22 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 18:19:17 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s){
    size_t i;

    i = 0;
    while (s[i]!='\0')
    {
        i++;
    }
    return i;
}

/*
int main(int argc, char const *argv[])
{
    printf("%zu \n",ft_strlen("tuba"));
    return 0;
}
*/