#include "libft.h"

char	alternar_case(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z' && i % 2 == 0)
		return (c - 32);
	if (c >= 'A' && c <= 'Z' && i % 2 != 0)
		return (c + 32);
	return (c);
}

int	main(void)
{
	char *original = "casa42sp";
	char *resultado;

	resultado = ft_strmapi(original, alternar_case);

	printf("Original: %s\n", original);
	printf("Resultado: %s\n", resultado);

	free(resultado);
	return (0);
}
