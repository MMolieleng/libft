#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cpy;
	char	*source;
	int	i;

	i = (int)n;
	cpy = (char *)dest;
	source = (char *)src;
	while (i >= 0)
	{
		cpy[i] = source[i];
		i--;
	}
	return (dest);
}

int	main(void)
{
	char *s1 = "Mohale Moses";
	char s2[80];

	char *res = (char *)ft_memcpy(s2, s1, 6);
	printf("%s\n", res);
	return (0);
}
