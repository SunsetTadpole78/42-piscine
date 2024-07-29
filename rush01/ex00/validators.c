/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validators.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:          <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:32:22 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 21:02:19 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_left(t_node **cur, int *left, int n)
{
	int	max;
	int	count;
	int	line;

	max = 0;
	count = 0;
	line = (*cur)->line;
	while ((*cur) && (*cur)->col < n)
	{
		if ((*cur)->value > max)
		{
			max = ((*cur)->value);
			count++;
		}
		if (!(*cur)->next)
		{
			if (count != left[line])
				return (0);
			return (1);
		}
		(*cur) = (*cur)->next;
	}
	return (0);
}

int	check_right(t_node **cur, int *right)
{
	int	max;
	int	count;
	int	line;

	max = 0;
	count = 0;
	line = (*cur)->line;
	while ((*cur) && (*cur)->col >= 0)
	{
		if ((*cur)->value > max)
		{
			max = ((*cur)->value);
			count++;
		}
		if (!(*cur)->previous)
		{
			if (count != right[line])
				return (0);
			return (1);
		}
		(*cur) = (*cur)->previous;
	}
	return (0);
}

int	check_up(t_node **cur, int *up, int n)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = (*cur)->col;
	while ((*cur)->line < n)
	{
		if ((*cur)->value > max)
		{
			max = (*cur)->value;
			count++;
		}
		if (!(*cur)->next)
			break ;
		(*cur) = (*cur)->next;
		while ((*cur)->next && (*cur)->col != col)
		{
			(*cur) = (*cur)->next;
		}
	}
	if (count != up[col])
		return (0);
	return (1);
}

int	check_down(t_node **cur, int *down)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = (*cur)->col;
	while ((*cur)->line >= 0)
	{
		if ((*cur)->value > max)
		{
			max = (*cur)->value;
			count++;
		}
		if (!(*cur)->previous)
			break ;
		(*cur) = (*cur)->previous;
		while ((*cur)->previous && (*cur)->col != col)
			(*cur) = (*cur)->previous;
	}
	if (count != down[col])
		return (0);
	return (1);
}
