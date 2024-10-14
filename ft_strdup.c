/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tubaeraslan <tubaeraslan@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:30:02 by tubaeraslan       #+#    #+#             */
/*   Updated: 2024/10/14 19:30:17 by tubaeraslan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strdup(const char *s1){
    char	*str2;
	size_t	len;

	len = ft_strlen(s1);
	str2 = (char *)malloc(len + 1);
	if ((str2) == NULL)
		return (NULL);
	ft_memcpy(str2, s1, len + 1);
	return (str2);
}