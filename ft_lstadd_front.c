/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:25:21 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/17 19:29:17 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new){
    if (!new)
    {
        return;
    }
    new->next=*lst;
    *lst=new;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
