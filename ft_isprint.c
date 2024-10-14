/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:36:59 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 17:39:03 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c){
    if (c>=20 && c<=126)
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d \n",ft_isprint(127));
    return 0;
}
