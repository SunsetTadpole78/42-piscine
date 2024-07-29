/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:06:53 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/29 16:43:18 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_printcomb(int tab[10], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	if (tab[0] != (10 - n))
		ft_putstr(", ");
}

void	ft_print_comb_rec(int tab[10], int n, int pos, int i)
{
	if (pos == n + 1)
	{
		ft_printcomb(tab, n);
		return ;
	}
	while (i <= 9 - n + pos)
	{
		tab[pos - 1] = i;
		ft_print_comb_rec(tab, n, pos + 1, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	ft_print_comb_rec(tab, n, 1, 0);
}

/*int	main(void)
{
	ft_print_combn(3);
	return (0);
}*/
