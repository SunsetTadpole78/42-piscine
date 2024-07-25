/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:02:32 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/24 10:49:29 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	tens(int n)
{
	return (n / 10);
}

int	unit(int n)
{
	return (n % 10);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(tens(nbr) * -1);
		ft_putchar('8');
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(nbr * -1);
		return ;
	}
	if (nbr <= 9)
	{
		ft_putchar(nbr + '0');
		return ;
	}
	ft_putnbr(tens(nbr));
	ft_putchar(unit(nbr) + '0');
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	return (0);
}*/
