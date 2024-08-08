/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:45:41 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/31 12:33:35 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

unsigned int	check_errors(char *base);
int				ft_atoi_base(char *str, char *base);

char	*ft_strcat_char(char *dest, char c)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	dest[i] = c;
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_convert_rec(int nbr, char *base, char *result, int size)
{
	char	*act;
	int		len;

	size = size + sizeof(char);
	act = malloc(size);
	act = ft_strcpy(act, result);
	if (!act)
		return (NULL);
	if (nbr < 0)
	{
		act = ft_strcat_char(act, '-');
		return (ft_convert_rec(nbr * -1, base, act, size));
	}
	len = 0;
	while (base[len])
		len ++;
	if (nbr >= len)
	{
		act = ft_convert_rec(nbr / len, base, act, size);
		act = ft_convert_rec(nbr % len, base, act, size);
	}
	else
		act = ft_strcat_char(act, base[nbr]);
	return (act);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	tnbr;

	if (check_errors(base_from) || check_errors(base_to))
		return (NULL);
	tnbr = ft_atoi_base(nbr, base_from);
	return (ft_convert_rec(tnbr, base_to, "", 0));
}

/*int	main(void)
{
	printf("%s\n", ft_convert_base("-2a", "0123456789abcdef", "0123456789"));
	printf("%s", ft_convert_base("-42", "0123456789", "01"));
	return (0);
}*/
