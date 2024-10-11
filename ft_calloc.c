#include <stdio.h>
#include <stddef.h>

//bellekte yer ayırır ancak malloc boş yer ayırırken calloc 0 ile doldurulmuş yer ayırır

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

void *ft_calloc(size_t count, size_t size){
    void *ptr;
    ptr= malloc(count * size);
    if (ptr)
    {
        ft_bzero(ptr,count*size);
    }
    
}