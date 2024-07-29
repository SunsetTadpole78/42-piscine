/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   possibilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:12:33 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 22:12:31 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	*check_column(t_node *cur, int *result)
{
	int	col;

	col = cur->col;
	while (cur)
	{
		if (cur->value != 0 && result[cur->value - 1] == cur->value)
			result[cur->value - 1] = -1;
		cur = cur->previous;
		while (cur && cur->col != col)
		{
			cur = cur->previous;
		}
	}
	return (result);
}

int	*check_line(t_node *cur, int *result)
{
	int		line;

	line = cur->line;
	cur = cur->previous;
	while (cur && cur->line == line)
	{
		if (cur->value != 0 && result[cur->value - 1] == cur->value)
			result[cur->value - 1] = -1;
		cur = cur->previous;
	}
	return (result);
}

int	*get_possibilities(t_node *cur, int n)
{
	int		*result;
	int		i;

	result = (int *)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		result[i] = i + 1;
		i++;
	}
	result = check_column(cur, result);
	result = check_line(cur, result);
	return (result);
}

int	is_possible(t_node *cur, int id, int n)
{
	int	*possibilities;
	int	i;

	possibilities = get_possibilities(cur, n);
	i = 0;
	while (possibilities[i])
	{
		if (possibilities[i] == id)
		{
			free(possibilities);
			return (1);
		}
		i++;
	}
	free(possibilities);
	return (0);
}
