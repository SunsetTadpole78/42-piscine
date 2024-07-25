/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:05:52 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 17:46:38 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < ' ' || c > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%i", ft_str_is_printable(" "));
	printf("%i", ft_str_is_printable("Welcome"));
	printf("%i", ft_str_is_printable("aaa\\Wq-"));
	printf("%i", ft_str_is_printable("~test"));
	printf("%i", ft_str_is_printable("illegal: \xbe"));
	return (0);
}*/
