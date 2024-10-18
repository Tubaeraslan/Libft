/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:47:35 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/18 22:17:31 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new){
    if (!new)
    {
        return;
    }
    while (lst->next)
    {
        lst=lst->next;
    }
    lst->next=new;
    
}