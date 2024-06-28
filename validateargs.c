/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validateargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:53:31 by karpatel          #+#    #+#             */
/*   Updated: 2024/06/24 11:53:32 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	digit(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int	overflow(char *str)
{
	int	i;

	i = ft_atoi(str);
	if(i == 0 || i == -1)
		return (1);
	return (0);
}

int	valid(char *str)
{
	if(overflow(str))
		return (0);
	if(!digit(str))
		return (0);
	return (1);
}

int	duplicate(t_list *head)
{
	t_list	*temp;
	t_list	*i;
	int		curr;
	int		target;

	if(head == NULL || head -> next == NULL)
		return (0);
	temp = head;
	while(temp != NULL && temp -> next != NULL)
	{
		i = temp -> next;
		target = *(int *)temp -> content;
		while(i != NULL)
		{
			curr = *(int *)i -> content;
			if(target == curr)
				return (1);
			i = i -> next;
		}
		temp = temp -> next;
	}
	return (0);
}

int	validate_args(int argc,char *argv[])
{
	int	i;

	i = 0;
	while(i < argc - 1)
	{
		if(!valid(argv[1 + i]))
			return (0);
		i++;
	}
	return (1);
}
