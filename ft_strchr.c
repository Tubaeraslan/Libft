/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:40:37 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 21:27:53 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s nin içinde c nin ilk geçtiği yeri bulur

char	*ft_strchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		len--;
	}
	return (NULL);
}

/*
int main(int argc, char const *argv[])
{
    char a[]="tubua";
    char b ='c';
    char *result = ft_strchr(a, b); 
    printf("%s \n",result);
    
    return 0;
}
*/