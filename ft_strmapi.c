#include "libft.h"

char *ft_strmapi(const char *s, char (*f)(unsigned int, char)){
    unsigned int i = 0;
    char *str = malloc(sizeof(char) * ft_strlen(s) + 1); 
    if (!str)
    {
        return(NULL);
    }

    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}