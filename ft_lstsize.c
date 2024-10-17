/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:34:32 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/17 20:44:07 by tubaeraslan      ###   ########.fr       */
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
    char data[]="hello world";
    t_list *node=ft_lstnew(data);
    printf("%d \n",ft_lstsize(node));
    return 0;
}
