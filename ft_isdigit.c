/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:27:31 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 17:29:39 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c){
    if (c>='0' && c<='9')
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d \n",ft_isdigit(89));
    return 0;
}
