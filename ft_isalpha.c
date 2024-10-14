/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:22:26 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 17:27:11 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c){
    if ((c>=97 && c<=122) || (c>=65 && c<=90))
    {
        return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    printf("%d \n",ft_isalpha(70));
    return 0;
}
