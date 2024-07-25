/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 09:41:43 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 09:31:19 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			str[i] = c - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	text[] = "Hello world !";
	
	printf("%s", ft_strupcase(text));
}*/
