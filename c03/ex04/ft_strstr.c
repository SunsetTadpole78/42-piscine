/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:44:54 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/23 15:49:50 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<string.h> */
/* #include<stdio.h> */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s;

	i = 0;
	j = 0;
	s = 0;
	while (to_find[s])
		s++;
	if (s == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			j++;
			if (j == s)
				return (&str[i - s + 1]);
		}
		else
			j = 0;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	text[] = "It is a good idea to drink a lot of coffee.";
	char	needle[] = "good";
	char	needle2[] = "bad";
	printf("%s:", ft_strstr(text, needle));
	printf("%s\n", strstr(text, needle));
	printf("%s:", ft_strstr(text, needle2));
	printf("%s\n", strstr(text, needle2));
	printf("%s:", ft_strstr(text, ""));
	printf("%s", strstr(text, ""));
}*/
