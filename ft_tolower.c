/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:37:59 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 18:40:10 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c){
    if (c>=65 && c<=90)
    {
        return c+32;
    }
    return c;
}

int main(int argc, char const *argv[])
{
    printf("%c \n",ft_tolower('T'));
    return 0;
}
