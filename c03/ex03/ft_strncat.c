/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:33:03 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 16:42:18 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	s1[24] = "Bonjour je m'appelle ";
	char	s2[] = "pastis";

	printf("%s", ft_strncat(s1, s2, 3));
	return (0);
}*/
