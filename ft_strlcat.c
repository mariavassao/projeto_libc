#include "libft.h"

size_t ft_strlcat( char * dst, const char *src, size_t dstsize){
    size_t src_len, dst_len;
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len <= dstsize + 1)
    {
        return dst_len + src_len;
    } 
    else if (dstsize + 1 > (dst_len + src_len))
    {
        dst = *dst + *src;
    } 
    else
    {
        
    }
    
    

}