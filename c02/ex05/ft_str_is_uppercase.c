/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:56:35 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/20 21:04:37 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < 'A' || c > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%i", ft_str_is_uppercase(""));
	printf("%i", ft_str_is_uppercase("ABASICSTRING"));
	printf("%i", ft_str_is_uppercase("AbASICSTRING"));
	printf("%i", ft_str_is_uppercase("A1B"));
	printf("%i", ft_str_is_uppercase("A:B"));
}*/
