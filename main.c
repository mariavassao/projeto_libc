#include "libft.h"
#include <stdio.h>

int main(void)
{
    char texto[6] = "Maria";

    ft_bzero(texto, 6); // apaga tudo

    if (texto[0] == '\0')
        printf("String limpa!\n");
}
