#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	alternar_case(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z' && i % 2 == 0)
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z' && i % 2 != 0)
		*c = *c + 32;
}

int	main(void)
{
	char str[] = "casa42sp";

	printf("Antes: %s\n", str);

	ft_striteri(str, alternar_case);

	printf("Depois: %s\n", str);

	return (0);
}
