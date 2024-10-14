/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:12:24 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 21:11:00 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize){
    size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int main(int argc, char const *argv[])
{
    char a[]="tuba";
    char b[5];
    ft_strlcpy(b,a,5);
    printf("%s \n",b);
    printf("%zu \n",ft_strlcpy(b,a,5));
    return 0;
}
*/