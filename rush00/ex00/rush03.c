/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:32:02 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/21 17:25:07 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int	abs;
	int	ord;

	ord = 1;
	while (ord <= y)
	{
		abs = 1;
		while (abs <= x)
		{
			if ((abs == 1 && ord == 1) || (abs == 1 && ord == y))
				ft_putchar('A');
			else if ((abs == x && ord == 1) || (abs == x && ord == y))
				ft_putchar('C');
			else if (ord == 1 || ord == y)
				ft_putchar('B');
			else if (abs == 1 || abs == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			abs++;
		}
		ft_putchar('\n');
		ord++;
	}
}
