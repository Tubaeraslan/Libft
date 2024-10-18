/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:25:21 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/18 21:28:18 by tubaeraslan      ###   ########.fr       */
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

/*
int main(int argc, char const *argv[])
{
    t_list *a;
    t_list *b;

    int data[]={68};
    char *data2="world";

    a = ft_lstnew(data);
    b = ft_lstnew(data2);
    
    ft_lstadd_front(&a,b);
    printf("%s \n",(char *)a->content);
    printf("%d \n",*(int *)a->next->content);
    
    return 0;
}
*/