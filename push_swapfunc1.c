/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapfunc1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:30:00 by karpatel          #+#    #+#             */
/*   Updated: 2024/06/25 12:30:02 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	swap(t_list **stacka)
{
	t_list	*top;
	t_list	*topnext;

	if(!stacka || !(*stacka) || !(*stacka) -> next)
		return ;
	top = *stacka;
	topnext = (*stacka) -> next;
	(*stacka) = (*stacka) -> next;
	(*stacka) -> next = top;
	(*stacka) -> next -> next = topnext;
}

void	ss(t_list **stacka, t_list **stackb)
{
	swap(stacka);
	swap(stackb);
	ft_printf("ss\n");
}
//top of 2 is pushed at top of 1
void	push(t_list **stack1, t_list **stack2)
{
	t_list	*temp;
	t_list	*next;

	if(stack2 == NULL)
		return ;
	temp = *stack2;
	*stack2 = (*stack2) -> next;
	next = *stack1;
	*stack1 = temp;
	temp -> next = next;
}

void	rotate(t_list **stack)
{
	t_list	*temp;
	t_list	*i;

	if(*stack == NULL || (*stack) -> next == NULL)
		return ;
	temp = *stack;
	i = (*stack) -> next;
	*stack = (*stack)->next;
	while(i -> next != NULL)
		i = i -> next;
	i -> next = temp;
	temp -> next = NULL;
}

void	rr(t_list **stacka, t_list **stackb)
{
	rotate(stacka);
	rotate(stackb);
	ft_printf("rr\n");
}
