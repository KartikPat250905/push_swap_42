/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karpatel <karpatel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:31:14 by karpatel          #+#    #+#             */
/*   Updated: 2024/06/24 15:31:16 by karpatel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

t_list	*linkedinit(char *argv[], int argc)
{
	int		i;
	int		*data;
	t_list	*head;

	i = 0;
	while(i < argc - 1)
	{
		data = (int *)malloc(sizeof(int));
		if (!data)
			errormsg();
		*data = ft_atoi(argv[i + 1]);
		if(i == 0)
			head = ft_lstnew(data);
		else
			ft_lstadd_back(&head, ft_lstnew(data));
		i++;
	}
	if(duplicate(head))
		freenexit(head, NULL);
	return (head);
}

void	linkedlistprinter(t_list *head)
{
	t_list	*temp;

	temp = head;
	while(temp != NULL)
	{
		ft_printf("%d ", *(int *)temp->content);
		temp = temp -> next;
	}
	ft_printf("\n");
}
