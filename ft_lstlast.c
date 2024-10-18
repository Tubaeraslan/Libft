/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:32:07 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/18 21:45:50 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
    {
        return 0;
    }
    while (lst->next)
    {
        lst = lst->next;
    }
    return (lst);
}

int main(int argc, char const *argv[])
{
    char *data="hello";
    char *data2="hellok";
    char *data3="hellom";

    t_list *a = ft_lstnew(data);
    t_list *b = ft_lstnew(data2);
    t_list *c = ft_lstnew(data3);
    
    ft_lstadd_front(&a,b);
    ft_lstadd_front(&a,c);

    printf("%s \n",(char *)ft_lstlast(a)->content);
    
    return 0;
}
