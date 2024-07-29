/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:54:34 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 22:25:09 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	individual_number(char *str, int index, int n)
{
	int	i;
	int	count;
	int	nb;

	i = 0;
	nb = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= n + '0')
			count++;
		if (count == index)
		{
			nb = str[i] - '0';
			return (nb);
		}
		i++;
	}
	return (nb);
}

void	create_views(char *str, int result[4][9], int n)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 1;
	while (i < 4)
	{
		j = 0;
		while (j < n)
		{
			result[i][j] = individual_number(str, index, n);
			index++;
			j++;
		}
		i++;
	}
}

int	check_errors(char *str, int n)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] < '1' && str[i] != ' ') || str[i] > n + '0')
			return (1);
		if (str[i] >= '1' && str[i] <= n + '0')
		{
			if (str[i + 1] != ' ' && str[i + 1] != 0)
				return (1);
			count++;
		}
		i++;
	}
	if (count != n * 4)
		return (1);
	return (0);
}
