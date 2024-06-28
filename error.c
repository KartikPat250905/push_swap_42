/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:29:29 by karpatel          #+#    #+#             */
/*   Updated: 2024/06/24 15:29:31 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	errormsg(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	freenexit(t_list *a, t_list *b)
{
	t_list	*next;

	while (a != NULL)
	{
		next = a->next;
		free(a -> content);
		free(a);
		a = next;
	}
	while (b != NULL)
	{
		next = b->next;
		free(b -> content);
		free(b);
		b = next;
	}
	errormsg();
}
void	freenoex(t_list *a, t_list *b)
{
	t_list	*next;

	while (a != NULL)
	{
		next = a->next;
		if (a->content)
			free(a -> content);
		free(a);
		a = next;
	}
	while (b != NULL)
	{
		next = b->next;
		if (b->content)
			free(b -> content);
		free(b);
		b = next;
	}
}
