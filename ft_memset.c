#include <stdio.h>
#include <stddef.h>


//c yi(unsigned char a çevirip) len kadar alıp b nin içine kopyalar

void *ft_memset(void *b, int c, size_t len){
    size_t i;

    i = 0;
    while(i < len){
        ((unsigned char*)b)[i]=c;
        i++;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    char a[]="hello";
    ft_memset(a,'a',2);
    printf("%s \n",a);

    int b[5]={1,2,3,4,5};
    ft_memset(b,0,8);
    for (int i = 0; i < 5; i++)
    {
        printf("%d",b[i]);
    }
    
    return 0;
}
