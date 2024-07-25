/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:33:57 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 10:39:36 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			str[i] = c + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	text[] = "HELLO worLD !";

	printf("%s", ft_strlowcase(text));
}*/
