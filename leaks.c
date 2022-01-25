#include <stdio.h>
#include <stdlib.h>

void	leaks(void)
{
	printf("\n\e[1;31mLeak report\e[1;30m:\n\e[0;36m\n");
	system("leaks PROGRAM_NAME | grep leaked");
	printf("\e[0m\n");
}

int	main(void)
{
	atexit(leaks);
	// program code
	return (0);
}
