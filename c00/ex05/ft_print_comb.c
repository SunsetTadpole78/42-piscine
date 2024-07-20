/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:09:54 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/17 18:58:13 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(char a, char b, char c)
{
	ft_print(a);
	ft_print(b);
	ft_print(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_print(',');
		ft_print(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_numbers(a, b, c);
				c = c + 1;
			}
			b = b + 1;
		}
		a = a + 1;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/
