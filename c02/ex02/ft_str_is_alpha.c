/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 19:35:24 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/20 21:03:26 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
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
	printf("%d", ft_str_is_alpha("AJGovmroJGRPWFJ"));
	printf("%d", ft_str_is_alpha("Hello World"));
	printf("%d", ft_str_is_alpha("AJGovmroJGR:PWFJ"));
	printf("%d", ft_str_is_alpha("\\"));
	printf("%d", ft_str_is_alpha("exercice 2"));
	return (0);
}*/
