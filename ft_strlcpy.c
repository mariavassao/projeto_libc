#include "libft.h"

size_t *ft_strlcpy(char *dst, const char *src, size_t dstsize){

    size_t c;
 
    for (size_t i = 0; src[i] != '\0'; i++)
    {
        c = src[i];
    }
    
    if (dstsize <= c)
    {
        while (dstsize <= c)
        {
            *(dst++)= *(src++);
        }
        return dst;
    } else
    {
        while (dstsize-1 )
        {
            /* code */
        }  
    }
}