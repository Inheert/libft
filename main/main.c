#include "libft.h"
#include <string.h>

int	main(void)
{
	char *str = "A";
	size_t size = 0;
	char *ret = ft_substr(str, 0, size);
	printf("\n--%s--\n", ret);
}
