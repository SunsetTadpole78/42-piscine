/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:02:04 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 13:20:41 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h> */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	printf("%i\n", ft_strncmp("Test", "Test", 2));
	printf("%i\n", ft_strncmp("AAA", "AAB", 2));
	printf("%i\n", ft_strncmp("aaaaa", "aa", 1));
	printf("%i\n", ft_strncmp("aa", "aaaaa", 5));
	return (0);
}*/
