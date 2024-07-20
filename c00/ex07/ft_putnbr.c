/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:59:45 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/18 16:52:51 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

int	tens(int nb)
{
	while (nb % 10 != 0)
	{
		nb--;
	}
	return (nb);
}

int	unit(int nb)
{
	return (nb - tens(nb));
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_print('-');
		ft_putnbr(tens(nb) / 10);
		ft_print(unit(nb) + '0');
		return ;
	}
	if (nb < 0)
	{
		ft_print('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_print(nb + '0');
		return ;
	}
	ft_putnbr(tens(nb) / 10);
	ft_print(unit(nb) + '0');
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	ft_print('\n');
	ft_putnbr(2147483647);
	ft_print('\n');
	ft_putnbr(42);
	ft_print('\n');
	ft_putnbr(0);
	ft_print('\n');
	ft_putnbr(-1);
	ft_print('\n');
	ft_putnbr(1);
	ft_print('\n');
	return (0);
}*/
