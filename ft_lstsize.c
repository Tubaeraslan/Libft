/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:34:32 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/18 21:26:43 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst){
    int i;

    i = 1;
    if (!lst)
    {
        return 0;
    }
    while (lst)
    {
        lst=lst->next;
        i++;
    }
    return i;
}

int main(int argc, char const *argv[])
{
    char data[]="hello";
    char data2[]="world";
    t_list *node=ft_lstnew(data);
    t_list *node2=ft_lstnew(data2);
    ft_lstadd_front(&node2,node);
    printf("%d \n",ft_lstsize(node));
    return 0;
}
