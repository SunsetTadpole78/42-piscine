/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:16:26 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/29 11:09:36 by lroussel         ###   ########.fr       */
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
	if (nb == 1)
		return (1);
	a = 2;
	b = nb;
	while (a <= b)
	{
		c = (a + b) / 2;
		if (c > nb / c)
			b = c - 1;
		else if ((c * c) == nb)
			return (c);
		else
			a = c + 1;
	}
	return (0);
}

/*int	main(void)
{
	printf("0:%d\n", ft_sqrt(6));
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
	printf("0:%d\n", ft_sqrt(0));
	printf("max:%d\n", ft_sqrt(2147483640));
	printf("max sqrt:%d\n", ft_sqrt(2147395600));
	return (0);
}*/
