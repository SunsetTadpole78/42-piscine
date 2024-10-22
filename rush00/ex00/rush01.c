/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlongin  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:30:06 by jlongin           #+#    #+#             */
/*   Updated: 2024/07/21 18:32:04 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	print_corner01(int xi, int yi, int maxX, int maxY)
{
	if (yi == 0 && xi == 0)
	{
		ft_putchar('/');
		return (1);
	}
	if (yi == 0 && xi == maxX)
	{
		ft_putchar('\\');
		return (1);
	}
	if (yi == maxY && xi == 0)
	{
		ft_putchar('\\');
		return (1);
	}
	if (yi == maxY && xi == maxX)
	{
		ft_putchar('/');
		return (1);
	}
	return (0);
}

int	print_edge01(int xi, int yi, int maxX, int maxY)
{
	if (xi == 0 || xi == maxX)
	{
		ft_putchar('*');
		return (1);
	}
	if (yi == 0 || yi == maxY)
	{
		ft_putchar('*');
		return (1);
	}
	return (0);
}

void	rush01(int x, int y)
{
	int	xi;
	int	yi;

	yi = 0;
	while (yi < y)
	{
		xi = 0;
		while (xi < x)
		{
			if (print_corner01(xi, yi, x - 1, y - 1) == 0)
			{
				if (print_edge01(xi, yi, x - 1, y - 1) == 0)
					ft_putchar(' ');
			}
			xi++;
		}
		ft_putchar('\n');
		yi++;
	}
}
