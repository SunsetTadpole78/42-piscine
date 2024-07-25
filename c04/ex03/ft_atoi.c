/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:03:01 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/23 17:44:20 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

unsigned int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == '\f')
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

void	ft_putnbr(char c, unsigned int *result)
{
	*result = *result * 10 + (c - '0');
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	sign;
	unsigned int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	while (ft_putsign(str[i], &sign))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ft_putnbr(str[i], &result);
		i++;
	}
	if (sign % 2)
		return (-result);
	return (result);
}

/*int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	printf("0:%d\n", ft_atoi("\0 1337"));
	printf("0:%d\n", ft_atoi("-0"));
	printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
	printf("-1325632167:%d\n", ft_atoi("-1325632167"));
	printf("-100:%d\n", ft_atoi("-100"));
	printf("min:%d\n", ft_atoi("\t---+2147483648"));
	printf("max:%d\n", ft_atoi("\v2147483647"));
	printf("min-1:%d\n", ft_atoi("\t---+2147483649"));
	printf("max+1:%d\n", ft_atoi("\v2147483649"));
}*/
