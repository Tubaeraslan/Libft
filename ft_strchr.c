#include <stdio.h>
#include <unistd.h>

// s nin içinde c nin ilk geçtiği yeri bulur

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		s_len--;
	}
	return (NULL);
}

int main(int argc, char const *argv[])
{
    char a[]="tuba";
    char b ='u';
    char *result = ft_strchr(a, b); 
    printf("%s \n",result);
    
    return 0;
}
