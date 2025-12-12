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

    if (len > s_len - start)
    {
        sub_len = s_len - start;
    } else{
        sub_len = len;
    }
    
    novaS = malloc(sub_len + 1);
    if (!novaS)
    {
        return NULL;
    }

    i = 0;

    while (s[start])
    {
        novaS[i] = s[start++];
        i++;
    }
    novaS[i] = '\0';
    
    return novaS;  
}