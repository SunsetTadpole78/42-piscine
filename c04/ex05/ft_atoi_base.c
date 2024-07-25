/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:57:09 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/24 10:46:08 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

unsigned int	ft_putsign(char c, unsigned int *sign)
{
	if (c != '+' && c != '-')
		return (0);
	if (c == '-')
		*sign = *sign + 1;
	return (1);
}

int	ft_putbasenbr(char c, char *base, unsigned int len, int *result)
{
	unsigned int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			*result = *result * len + i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_errors(char *base)
{
	int	s;
	int	i;

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

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	sign;
	unsigned int	len;
	int				result;

	if (check_errors(base))
		return (0);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 0;
	while (ft_putsign(str[i], &sign))
		i++;
	len = 0;
	while (base[len])
		len++;
	result = 0;
	while (ft_putbasenbr(str[i], base, len, &result))
		i++;
	if (sign % 2 == 1)
		return (-result);
	return (result);
}

/* int	main(void)
{
	printf("42:%d\n", ft_atoi_base("101010", "01"));
	printf("42:%d\n", ft_atoi_base("-2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
}*/
