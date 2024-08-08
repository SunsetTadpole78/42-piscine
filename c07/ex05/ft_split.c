/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:30:41 by lroussel          #+#    #+#             */
/*   Updated: 2024/08/01 17:10:21 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

char	ft_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_get_word(char *str, int *i, char *charset)
{
	int		j;
	int		k;
	char	*word;

	j = *i;
	while (str[j] && !ft_is_separator(str[j], charset))
		j++;
	word = malloc(sizeof(char) * (j - (*i)));
	if (!word)
		return (NULL);
	k = 0;
	while (*i < j)
	{
		word[k] = str[*i];
		*i = *i + 1;
		k++;
	}
	return (word);
}

int	ft_get_split_size(char *str, char *charset)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (charset[0] && (!ft_is_separator(str[i], charset)
				|| ft_is_separator(str[i + 1], charset)))
			i++;
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		index;
	char	**result;

	result = malloc(sizeof(char *) * (ft_get_split_size(str, charset) + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (str[i])
	{
		if (!ft_is_separator(str[i], charset))
		{
			result[index] = ft_get_word(str, &i, charset);
			if (!result[index])
				return (NULL);
			index++;
			continue ;
		}
		i++;
	}
	result[index] = NULL;
	return (result);
}

/*int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Aaa,basic  sentence, with basic words", " ,e");
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}*/
