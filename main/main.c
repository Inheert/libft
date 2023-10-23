#include "libft.h"
#include <string.h>

int	main(void)
{
	int		size = 10;
	char	*src = "lorem ipsum dolor sit amet";
	char	dest[14] = "a";

	printf("%zu -- %s", ft_strlcat(dest, src, size), dest);
	return (0);
}
