/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:29:33 by karpatel          #+#    #+#             */
/*   Updated: 2024/06/24 11:29:34 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

void	errormsg(void);
int		issorted(t_list *stack);
int		validate_args(int argc,char *argv[]);
void	solvethree(t_list **stack);
void	push_swap(t_list *stack_a, t_list *stack_b);
t_list	*linkedinit(char *argv[], int argc);
void	linkedlistprinter(t_list *head);
int		duplicate(t_list *head);
void	freenexit(t_list *a, t_list *b);
void	swap(t_list **stacka);
void	freenoex(t_list *a, t_list *b);
void	ss(t_list **stacka, t_list **stackb);
void	push(t_list **stack1, t_list **stack2);
void	rotate(t_list **stack);
void	rr(t_list **stacka, t_list **stackb);
void	reverserotate(t_list **stack);
void	rrr(t_list **stacka, t_list **stackb);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);

#endif
