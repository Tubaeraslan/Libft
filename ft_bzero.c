#include <stdio.h>
#include <unistd.h>

//s nin içine n kadar boş byte gönderir

void *ft_memset(void *b, int c, size_t len){
    size_t i;

    i = 0;
    while(i < len){
        ((unsigned char*)b)[i]=c;
        i++;
    }
    return b;
}

void ft_bzero(void *s, size_t n){

    ft_memset(s,'\0',n);
}

int main(int argc, char const *argv[])
{
    char a []="hello";
    ft_bzero(a,2);
    for (int i = 0; i < 5; i++)
    {
        if (a[i]=='\0')
        {
            printf("\\0 \n");
        }
        else{
            printf("%c \n",a[i]);
        }
        
    }

    int b[5]={1,2,3,4,5};
    ft_bzero(b,12);
    for (int i = 0; i < 5; i++)
    {
        if (b[i]==0)
        {
            printf("0 \n");
        }
        else{
            printf("%d \n",b[i]);
        }
    }
    

    
    return 0;
}
