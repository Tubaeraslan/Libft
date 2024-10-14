/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:33:38 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 17:36:43 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c){
    if (c>=0 && c<=127)
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d \n",ft_isascii(67));
    return 0;
}
