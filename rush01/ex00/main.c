/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:48:49 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/28 23:29:12 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	run(char *view_args, int n)
{
	t_node	*head;
	int		view[4][9];

	create_views(view_args, view, n);
	head = init_nodes(n);
	if (rec(head, view, n))
		print_table(head, n);
	else
		ft_putstr("Error\n");
	free_nodes(head);
}

int	main(int argc, char *argv[])
{
	int		n;

	n = 4;
	if (argc == 3)
	{
		n = mini_atoi(argv[2]);
		if (n < 1 || n > 9)
		{
			ft_putstr("Error\n");
			return (2);
		}
	}
	if ((argc != 2 && argc != 3) || check_errors(argv[1], n) != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	run(argv[1], n);
	return (0);
}
