/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:30:00 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 17:33:17 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c){
    if ((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d \n",ft_isalnum(36));
    return 0;
}
