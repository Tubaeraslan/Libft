#include <stdio.h>
#include <unistd.h>

// s nin ilk n byte ındaki ilk c yi bulur

void *ft_memchr(const void *s, int c, size_t n){
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
        {
            return (void *)(s+i);
        }
        i++;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char a[]="tuba";
    char b='b';

    char *result= ft_memchr(a,b,2);

    printf("%s",result);


    int c[]={1,2,3,4,5};
    int d=3;
    int *rest=ft_memchr(c,d,20);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",rest[i]);
    }
    
    return 0;
}
