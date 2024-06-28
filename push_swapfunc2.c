/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swapfunc2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:30:08 by karpatel          #+#    #+#             */
/*   Updated: 2024/06/25 12:30:11 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	reverserotate(t_list **stack)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*temp;

	if(stack == NULL || (*stack) -> next == NULL)
		return ;
	prev = NULL;
	curr = *stack;
	while(curr -> next != NULL)
	{
		prev = curr;
		curr = curr -> next;
		ft_printf("Curr data is %d and prev is %d\n",*(int *)curr -> content, *(int *)prev -> content);
	}
	temp = curr;
	if (prev != NULL)
		prev -> next = NULL;
	temp -> next = *stack;
	*stack = temp;
}

void	rrr(t_list **stacka, t_list **stackb)
{
	reverserotate(stacka);
	reverserotate(stackb);
	ft_printf("rrr\n");
}
