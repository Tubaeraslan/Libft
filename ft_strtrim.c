/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:25:55 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 21:28:43 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set){
    size_t len;
    char *result;
    
    while (*s1 && ft_strchr(set,*s1)!=0)
    {
        s1++;
    }
    len = ft_strlen(s1);
}