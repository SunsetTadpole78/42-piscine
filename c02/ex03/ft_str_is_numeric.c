/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:23:43 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/20 21:03:56 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include<stdio.h> */

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < '0' || c > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d", ft_str_is_alpha(""));
	printf("%i", ft_str_is_numeric("955"));
	printf("%i", ft_str_is_numeric("42.0"));
	printf("%i", ft_str_is_numeric("a1"));
	printf("%i", ft_str_is_numeric("1:5"));
	return (0);
}*/
