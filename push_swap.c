#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (!validate_args(argc, argv))
		errormsg();
	stack_a = linkedinit(argv, argc);
	stack_b = NULL;
	if(issorted(stack_a))
	{
		freenoex(stack_a, stack_b);
		return (0);
	}
	solvethree(&stack_a);
	//push_swap(stack_a, stack_b);
	freenoex(stack_a, stack_b);
	return (0);
}
