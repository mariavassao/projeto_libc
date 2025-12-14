#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2){
    size_t len_1, len_2, i,j;
    char *novastr;

    len_1 = ft_strlen(s1);
    len_2 = ft_strlen(s2);

    novastr = (char*) malloc(len_1 + len_2 + 1);
    if (!novastr)
    {
        return NULL;
    }
    
    i=0;

    while (s1[i])
    {
        novastr[i] = s1[i];
        i++;
    }

    j=0;
    while (s2[j])
    {
        novastr[i] = s2[j++];   
        i++;
    }
    novastr[i] = '\0';
    return novastr;
}