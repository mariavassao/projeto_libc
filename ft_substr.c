#include "libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len){
    size_t s_len, sub_len, i;
    char *novaS;
    s_len = ft_strlen(s);
    
    
    if (start >= s_len)
    {
        novaS = malloc(1);
        novaS = " ";
        return  novaS;
    }
    return novaS;  
}