/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 22:23:03 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 23:25:27 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_table(t_node *head, int n)
{
	t_node	*cur;
	int		i;

	cur = head;
	i = 0;
	while (cur)
	{
		ft_putchar(cur->value + '0');
		cur = cur->next;
		i++;
		if (i % n == 0)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}

int	mini_atoi(char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}
