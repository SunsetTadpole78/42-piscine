/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 17:55:58 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 19:13:04 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */
/* #include <string.h> */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sd;
	unsigned int	ss;
	unsigned int	i;
	unsigned int	j;

	sd = 0;
	ss = 0;
	while (dest[sd])
		sd++;
	while (src[ss])
		ss++;
	if (size <= sd)
		return (size + ss);
	i = 0;
	j = sd;
	while (src[i] && i < size - sd - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (sd + ss);
}

/*int	main(void)
{
	char	s1[24] = "Bonjour je m'appelle ";
	char	s2[] = "pastis";

	printf("%u", ft_strlcat(s2, s1, 14));
	printf("%s", s1);
	return (0);
}*/
