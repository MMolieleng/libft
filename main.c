#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char str[] = "Mohale";

	printf("%s",(char *)ft_memset(str, '$', 4));
	return (0);
}
