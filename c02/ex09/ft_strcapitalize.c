/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:41:46 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/23 18:20:23 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */

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

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		space;
	char	c;

	ft_strlowcase(str);
	i = 0;
	space = 1;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			if (space)
			{
				str[i] = c - 32;
				space = 0;
			}
		}
		else if (c >= '0' && c <= '9')
			space = 0;
		else
			space = 1;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	text[] = "salut, coMMent tu vAs ? 
42mOts quArAnTe-dEux; cinQuante+et+un";

	printf("%s", ft_strcapitalize(text));
}*/
