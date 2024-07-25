/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:53:56 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 11:47:30 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	i;

	s = 0;
	i = 0;
	while (src[s])
		s++;
	if (size == 0)
		return (s);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s);
}

/* int	main(void)
{
	char	s1[] = "Bonjour je m'appelle et j'habite a";
	char	s2[8] = "";
	int		result;

	result = ft_strlcpy(s2, s1, 8);
	printf("%s", s2);
	return (0);
}*/
