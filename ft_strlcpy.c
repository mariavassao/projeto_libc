#include "libft.h"

size_t *ft_strlcpy(char *dst, const char *src, size_t dstsize){

    size_t c;
 
    c = ft_strlen(src);
    
    if (c + 1 < dstsize)
    {
        ft_memcpy(dst, src, c+1);
    } else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize-1);
        dst[dstsize -1] = 0;
    }
    return(c);
}