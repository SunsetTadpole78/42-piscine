/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:01:19 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/20 18:00:01 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	print_corner(int xi, int yi, int maxX, int maxY)
{
	if (xi == 0 && yi == 0)
	{
		ft_putchar('A');
		return (1);
	}
	if (xi == maxX && yi == maxY && maxY != 0 && maxX != 0)
	{
		ft_putchar('A');
		return (1);
	}
	if ((xi == maxX && yi == 0) || (xi == 0 && yi == maxY))
	{
		ft_putchar('C');
		return (1);
	}
	return (0);
}

int	print_edge(int xi, int yi, int maxX, int maxY)
{
	if (xi == 0 || xi == maxX || yi == 0 || yi == maxY)
	{
		ft_putchar('B');
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	xi;
	int	yi;

	if (x < 0 || y < 0 || x > 2147483647 || y > 2147483647)
	{
		write(1, "Invalid Argument, x & y limits: [0;INT_MAX]\n", 44);
		return ;
	}
	yi = 0;
	while (yi < y)
	{
		xi = 0;
		while (xi < x)
		{
			if (print_corner(xi, yi, x - 1, y - 1) == 0)
			{
				if (print_edge(xi, yi, x - 1, y - 1) == 0)
					ft_putchar(' ');
			}
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}
