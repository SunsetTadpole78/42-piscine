/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:04:36 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/22 17:45:22 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<string.h> */
/* #include<stdio.h> */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	text[] = "Olleh ? wtf";
	char	other[] = "Hello World, it's so cool";
	char	other2[] = "Hello World, it's so cool";

	ft_strncpy(other, text, 5);
	printf("%s", other);
	printf("%s", "\n");
	strncpy(other2, text, 5);
	printf("%s", other2);
}*/
