/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:45:29 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 22:16:27 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	test_node(t_node *cur, int view[4][9], int n)
{
	t_node	*check;

	if (cur->line == n - 1)
	{
		check = cur;
		if (!check_down(&check, view[1]) || !check_up(&check, view[0], n))
			return (0);
	}
	if (cur->col == n - 1)
	{
		check = cur;
		if (!check_right(&check, view[3]) || !check_left(&check, view[0], n))
			return (0);
	}
	return (1);
}

int	is_valid(t_node *cur, int view[4][9], int n)
{
	while (cur->previous)
		cur = cur->previous;
	while (cur)
	{
		if (!test_node(cur, view, n))
			return (0);
		cur = cur->next;
	}
	return (1);
}

int	rec(t_node *cur, int view[4][9], int n)
{
	int	i;

	i = 1;
	while (i <= n)
	{
		if (is_possible(cur, i, n))
		{
			cur->value = i;
			if (!cur->next)
			{
				if (is_valid(cur, view, n))
					return (1);
			}
			else if (rec(cur->next, view, n))
				return (1);
			cur->value = 0;
		}
		i++;
	}
	return (0);
}
