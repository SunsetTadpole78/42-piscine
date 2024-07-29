/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:20:28 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 18:52:34 by hduflos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

t_node	*next_node(t_node *head, int index, int n)
{
	t_node	*cur;
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	cur = head;
	while (cur->next)
		cur = cur->next;
	new->index = index;
	new->value = 0;
	new->col = index % n;
	new->line = index / n;
	new->next = NULL;
	new->previous = cur;
	cur->next = new;
	return (head);
}

t_node	*init_nodes(int n)
{
	int		i;
	t_node	*head;

	head = (t_node *)malloc(sizeof(t_node));
	head->index = 1;
	head->value = 0;
	head->col = 0;
	head->line = 0;
	head->next = NULL;
	head->previous = NULL;
	if (!head)
		return (NULL);
	i = 0;
	while (i < n * n - 1)
	{
		head = next_node(head, i + 1, n);
		if (!head)
			return (NULL);
		i++;
	}
	return (head);
}

void	free_nodes(t_node *head)
{
	t_node	*cur;
	t_node	*cur2;

	cur = head;
	while (cur)
	{
		cur2 = cur;
		cur = cur->next;
		free (cur2);
	}
}
