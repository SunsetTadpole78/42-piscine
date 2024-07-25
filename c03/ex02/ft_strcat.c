/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:23:05 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 13:37:12 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
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
	char	s1[19] = "Je m'appelle ";
	char	s2[] = "C03-02";

	ft_strcat(s1, s2);
	printf("%s", s1);
}*/
