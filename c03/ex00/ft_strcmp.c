/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:26:05 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 13:19:41 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%i\n", ft_strcmp("Test", "Test"));
	printf("%i\n", ft_strcmp("AAA", "BBB"));
	printf("%i\n", ft_strcmp("aaaaa", "aa"));
	printf("%i\n", ft_strcmp("aa", "aaaaa"));
}*/
