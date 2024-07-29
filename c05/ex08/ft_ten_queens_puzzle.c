/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:00:37 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/25 12:32:43 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

int	ft_can_place(int *board, int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (x == board[i] || (board[i] + i) == (y + x)
			|| (i - board[i]) == (y - x))
			return (0);
		i++;
	}
	return (1);
}

void	ft_printboard(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_find_rec(int *board, int col, int *res)
{
	int	line;

	if (col == 10)
	{
		ft_printboard(board);
		*res = *res + 1;
		return (*res);
	}
	else
	{
		line = 0;
		while (line < 10)
		{
			if (ft_can_place(board, line, col))
			{
				board[col] = line;
				ft_find_rec(board, col + 1, res);
			}
			line++;
		}
	}
	return (*res);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	res;

	res = 0;
	return (ft_find_rec(board, 0, &res));
}

/*int	main(void)
{
	printf("nb: %i", ft_ten_queens_puzzle());
}*/
