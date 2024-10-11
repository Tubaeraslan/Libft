#include <stdio.h>
#include <unistd.h>

void *ft_memcpy(void *dst, const void *src, size_t n){
    size_t i;

    if (dst == NULL && src == NULL)
		return (0);
    i = 0;
    while (i < n)
    {
        ((unsigned char*)dst)[i]=((unsigned char*)src)[i];
        i++;
    }
    return dst;
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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