/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:33:28 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 18:37:30 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c){
    if (c>=97 && c <=122)
    {
        return c-32;
    }
    return c;
}

int main(int argc, char const *argv[])
{
    printf("%c \n",ft_toupper('a'));
    return 0;
}
