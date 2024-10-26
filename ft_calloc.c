/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:29:19 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 19:30:25 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bellekte yer ayırır ancak malloc boş yer ayırırken calloc 0 ile doldurulmuş yer ayırır

void *ft_calloc(size_t count, size_t size){
    void *ptr;
    ptr= malloc(count * size);
    if (ptr)
    {
        ft_bzero(ptr,count*size);
    }
    
}