#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2){
    size_t len_1, len_2, i;
    char *novastr;

    len_1 = ft_strlen(s1);
    len_2 = ft_strlen(s2);

    novastr = malloc(len_1 + len_2 + 1);
    i=0;

    while (s1[i])
    {
        novastr[i] = s1[i];
        i++;
    }

    i=0;
    while (s2[i])
    {
        novastr[len_1++] = s2[i];   
        i++;
    }
    novastr[i] = '\0';
    return novastr;
}