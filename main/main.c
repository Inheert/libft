#include "libft.h"
#include <limits.h>

int	main(void)
{
	char	**list = ft_split("hello!", ' ');
	while(*list)
		printf("**%s\n", *list++);
}
