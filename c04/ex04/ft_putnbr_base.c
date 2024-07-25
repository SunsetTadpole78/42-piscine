/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:04:56 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/24 11:10:36 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_errors(char *base)
{
	int		s;
	int		i;

	s = 0;
	while (base[s])
	{
		i = 0;
		if (base[s] == '+' || base[s] == '-')
			return (1);
		while (base[i])
		{
			if (i != s && base[i] == base[s])
				return (1);
			i++;
		}
		s++;
	}
	if (s < 2)
		return (1);
	return (0);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_print_nbr_base(int nbr, char *base, int len)
{
	if (nbr >= len)
	{
		ft_print_nbr_base(nbr / len, base, len);
		ft_print_nbr_base(nbr % len, base, len);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (check_errors(base))
		return ;
	len = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_print_nbr_base((nbr / len) * -1, base, len);
		ft_print_nbr_base((nbr % len) * -1, base, len);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_print_nbr_base(nbr, base, len);
}

/*int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	ft_putchar('\n');
	ft_putnbr_base(42, "0123456789ABCDEF");
	ft_putchar('\n');
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	ft_putnbr_base(-42, "01");
	ft_putnbr_base(42, "01223456789");
	ft_putnbr_base(42, "0");
	ft_putnbr_base(42, "5-47");
	ft_putchar('\n');
	ft_putnbr_base(-2147483648, "01");
	return (0);
}*/
