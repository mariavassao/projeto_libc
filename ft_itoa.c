#include "libft.h"

static int len(int n){
    int i = 0;

    while (n)
    {    
        n /= 10;
        i++;
    }
    return i;
}

char *ft_itoa( int n){
    int tamanho = len(n);
    char *str = malloc(tamanho+1);
    
    // if (n < 0)
    // {
    //     str[0] = '-';
    //     tamanho++;
    //     n = -n;
    // }

    int i = tamanho - 1;

    while (i >= 0)
    {
        str[i] = (n % 10) + '0';
        n/=10;
        i--;
    }
   
    str[tamanho] = '\0';
    
    return str;
}