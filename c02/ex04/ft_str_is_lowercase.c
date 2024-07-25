/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:30:58 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/20 21:02:36 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c < 'a' || c > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%i", ft_str_is_lowercase(""));
	printf("%i", ft_str_is_lowercase("abasicstringvalue"));
	printf("%i", ft_str_is_lowercase("anOtherbasicstringvalue"));
	printf("%i", ft_str_is_lowercase("a value"));
	printf("%i", ft_str_is_lowercase("an1othervalue"));
	printf("%i", ft_str_is_lowercase("yes?"));
}*/
