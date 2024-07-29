/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:48:00 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/24 19:39:18 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_sqrt(int nb)
{
	int			a;
	int			b;
	long int	c;

	if (nb <= 0)
		return (0);
	a = 2;
	b = nb;
	while ((b - a) > 1)
	{
		c = (a + b) / 2;
		if ((c * c) <= nb)
			a = c;
		else
			b = c;
	}
	if (nb % a == 0)
		return (a);
	if (nb % b == 0)
		return (b);
	return (0);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	check;

	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	check = ft_sqrt(nb);
	if (check == 0)
		check = nb / 2;
	i = 3;
	while (i <= check)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/*int	main(void)
{
	int		i;
	char	*f;

	i = 1;
	while (i <= 100)
	{
		if (ft_is_prime(i) == 0)
			f = "|    ";
		else if (i < 10)
			f = "|  %i ";
		else
			f = "| %i ";
		printf(f, i);
		if (i % 10 == 0)
			printf("%s", "\n");
		i++;
	}
	return (0);
}*/
