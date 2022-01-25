#include "push_swap.h"

/*Prints stack a and b*/
void	print_stacks(t_list *a, t_list *b)
{
	printf("\e\e[1;30m-----------------\n\e[0;31mStacks:\n\n\e[0m");
	while (a || b)
	{
		if (a)
		{
			printf("\e[0;32m%d\e[0m", (int)a->content);
			a = a->next;
		}
		else
			printf("\e[0;30m0\e[0m");
		printf(" ");
		if (b)
		{
			printf("\e[0;36m%d\e[0m", (int)b->content);
			b = b->next;
		}
		else
			printf("\e[0;30m0\e[0m");
		printf("\n");
	}
	printf("\e[0;32m- \e[0;36m-\n\e[0;32ma \e[0;36mb\n\e[1;30m-----------------\n\e[0m");
}
