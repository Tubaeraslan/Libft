#include <stdio.h>
#include <unistd.h>


int ft_strncmp(const char *s1, const char *s2, size_t n){
    unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

int main(int argc, char const *argv[])
{
    char a[]="tuba";
    char b[]="tuaa";

    printf("%d \n",ft_strncmp(a,b,4));


    return 0;
}
