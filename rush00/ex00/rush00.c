/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:32:02 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/20 16:39:32 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	print_corner(int xi, int yi, int maxX, int maxY)
{
	if ((yi == 0 && xi == 0) || (yi == 0 && xi == maxX))
	{
		ft_putchar('o');
		return (1);
	}
	if ((yi == maxY && xi == 0) || (yi == maxY && xi == maxX))
	{
		ft_putchar('o');
		return (1);
	}
	return (0);
}

int	print_edge(int xi, int yi, int maxX, int maxY)
{
	if (xi == 0 || xi == maxX)
	{	
		ft_putchar('|');
		return (1);
	}
	if (yi == 0 || yi == maxY)
	{
		ft_putchar('-');
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
