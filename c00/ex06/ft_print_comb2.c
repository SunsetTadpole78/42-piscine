/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:01:22 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/17 20:21:00 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_nb(int nb)
{
	ft_print(nb / 10 + '0');
	ft_print(nb % 10 + '0');
}

void	ft_print_numbers(char a, char b)
{
	ft_print_nb(a);
	ft_print(' ');
	ft_print_nb(b);
	if (a != 98 || b != 99)
	{
		ft_print(',');
		ft_print(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_numbers(a, b);
			b = b + 1;
		}
		if (b == 99)
		{
			b = 0;
		}
		a += 1;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
