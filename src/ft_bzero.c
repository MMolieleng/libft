#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*s;

	s = (char *)str;
	while (n--)
	{
		s[n] = 0;
	}
}
