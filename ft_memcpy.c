#include <stdio.h>
#include <unistd.h>

//src nin n kadar değerini alıp dst ye kopyalar(unsigned char a dönüştürür) hata durumunda 0 döner

//unsigned char kullanmanın sebebi bellek adresleri ve byte değerierini temsil eden en uygun tür bellek işlemleri yaparken 1 byte harcar

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

int main(int argc, char const *argv[])
{
    char a[5];
    char b[]="melek";
    ft_memcpy(a,b,3);
    printf("%s \n",a);

    int c[5];
    int d[5]={1,2,3,4,5};
    ft_memcpy(c,d,20);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",c[i]);
    }
    
    return 0;
}
