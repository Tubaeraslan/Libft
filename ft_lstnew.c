/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:09:52 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/18 21:09:07 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content){
    t_list *new;
    new = malloc(sizeof(t_list));
    if (!new)
    {
        return 0;
    }
    new->content=content;
    new->next=NULL;
    return new;
}


// int main(int argc, char const *argv[])
// {
//     t_list *node;
//     char *data = "hello world";
//     node = ft_lstnew(data);

//     if (node)
//     {
//         printf("%s \n",(char *)node->content);
//     }
    
//     return 0;
// }
