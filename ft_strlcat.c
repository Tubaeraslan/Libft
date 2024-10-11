#include <stdio.h>
#include <unistd.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
    
}