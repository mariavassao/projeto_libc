#include "libft.h"

void *ft_momvome(void*dst, const void *src, size_t len){
    char *temp_dst;
    char *temp_src;
    size_t i = 0;
    if (!dst && !src)
    {
        return NULL;
    }
    temp_dst = ( char *)dst;
    temp_src = ( char *)src;

    if (temp_dst > temp_src)
    {
        while (len > 0)
        {
            temp_dst[len] = temp_src[len];
        }
    } else{
        while (i++ < len)
        {
            temp_dst[i] = temp_src[i];
        }
    }
    return dst;
}