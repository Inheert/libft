#include "libft.h"
#include <limits.h>

int	main(void)
{
	char	**list = ft_split(",a,ewf,, ,eegw,,,", ',');
	while(*list)
		printf("%s\n", *list++);
}
