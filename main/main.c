#include "libft.h"

int	main(void)
{
	char	**list; 
	
	//list = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	list = ft_split("      split       this for   me  !       ", ' ');
	while (*list)
		printf("-%s\n", *list++);
}
