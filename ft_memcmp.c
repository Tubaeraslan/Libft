#include <stdio.h>
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n){
    size_t i;

    i = 0;
    while (i<n)
    {
        if (((unsigned char *)s1)[i]!=((unsigned char *)s2)[i])
        {
            return ((unsigned char *)s1)[i]-((unsigned char *)s2)[i];
        }
        i++;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char a[]="tuba";
    char b[]="tuaa";

    printf("%d \n",ft_memcmp(a,b,4));

    int c[]={1,2,3,4};
    int d[]={1,2,3,1};
    printf("%d \n",ft_memcmp(c,d,16));
    return 0;
}
