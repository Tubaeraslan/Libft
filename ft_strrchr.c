#include <stdio.h>
#include <stddef.h>

//c nin s içinde bulunduğu son yeri verir

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrchr(const char *s, int c){
    int i;

    i = ft_strlen(s);
    while (i>=0)
    {
        if (s[i]==(char)c)
        {
            return (char*)(s+i);
        }
        i--;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char a[]="tubatur";
    char x='t';
    printf("%s",ft_strrchr(a,x));
    return 0;
}
