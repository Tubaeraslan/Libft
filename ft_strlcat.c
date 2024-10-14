/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:22:14 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 18:32:54 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
    size_t i;
	size_t d;
	size_t s;

	d=ft_strlen(dst);
	s=ft_strlen(src);

	i = 0;

	if (dstsize <=d)
	{
		return (dstsize + s);
	}
	while (src[i]!='\0' && d+i+1<dstsize)
	{
		dst[d+i]=src[i];
		i++;
	}
	dst[d+i]='\0';
	return (d+s);
}

int main(int argc, char const *argv[])
{
	char a[]="hello";
	char b[]="world";
	printf("%zu \n",ft_strlcat(a,b,11));
	ft_strlcat(a,b,11);
	printf("%s \n",a);
	return 0;
}
