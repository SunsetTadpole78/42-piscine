/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:35:40 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/30 20:01:51 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\r'
		|| c == '\v' || c == '\f');
}

unsigned int	ft_putsign(char c, unsigned int *sign)
{
	if (c != '+' && c != '-')
		return (0);
	if (c == '-')
		*sign = *sign + 1;
	return (1);
}

unsigned int	check_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		i++;
		while (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
	}
	if (i == 0 || i == 1)
		return (1);
	return (0);
}

int	ft_put_base_nbr(char c, char *base, int blen, int *result)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			*result = *result * blen + i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	i;
	unsigned int	sign;
	unsigned int	blen;
	int				result;

	if (check_errors(base))
		return (0);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 0;
	while (ft_putsign(str[i], &sign))
		i++;
	blen = 0;
	while (base[blen])
		blen++;
	result = 0;
	while (ft_put_base_nbr(str[i], base, blen, &result))
		i++;
	if (sign % 2 == 1)
		return (-result);
	return (result);
}
