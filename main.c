
#include "libft.h"

int main(void)
{
    char **res;
    int i = 0;

    res = ft_split("ola mundo 42", ' ');

    while (res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }

    return (0);
}
