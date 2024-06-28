/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:06:48 by karpatel          #+#    #+#             */
/*   Updated: 2024/06/25 16:09:06 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	issorted(t_list *stack)
{
	int		prev;
	int		curr;
	t_list	*temp;

	prev = INT_MIN;
	temp = stack;
	ft_printf("is soreted");
	while(temp != NULL)
	{
		curr = *(int *)temp -> content;
		if(prev > curr)
			return (0);
		prev = curr;
		temp = temp->next;
	}
	return (1);
}

void	solvetwo(t_list **stack)
{
	int	first;
	int	second;

	first = *(int *)(*stack) -> content;
	second = *(int *)(*stack) -> next -> content;
	if(first > second)
		swap(stack);
}

void	solvethree(t_list **stack)
{
	printf("here");
	int	top;
	int	middle;
	int	bottom;

	top = *(int *)(*stack) -> content;
	middle = *(int *)(*stack) -> next -> content;
	bottom = *(int *)(*stack) -> next -> next -> content;

	if (top > middle && middle < bottom && bottom > top)
		sa(stack);
	else if (top > middle && middle > bottom && bottom < top)
	{
		sa(stack);
		ft_printf("after sa");
		rra(stack);
	}
	else if (top > middle && middle < bottom && top > bottom)
		ra(stack);
	else if (top < middle && middle > bottom && bottom > top)
	{
		sa(stack);
		ra(stack);
	}
	else
		rra(stack);
	linkedlistprinter(*stack);
}

void	push_swap(t_list *stack_a, t_list *stack_b)
{
	if(issorted(stack_a))
		return ;
	(void)stack_b;
}

