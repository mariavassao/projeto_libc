#include "libft.h"

static int len(int tam){
    int i = 0;
    while (tam)
    {
        tam /= 10;
        i++;
    }
    return i;
}

char *ft_itoa( int n){
    int tamanho = len(n);
    char *str = malloc(tamanho+1);
    int i = tamanho - 1;

    while (i > 0)
    {
        str[i] = (n % 10) + '0';
        n/=10;
        i--;
    }
    
    return str;
}