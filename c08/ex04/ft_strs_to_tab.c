/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:30:19 by lroussel          #+#    #+#             */
/*   Updated: 2024/08/05 09:29:17 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	result = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
			return (NULL);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

/*int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int		i;

	tab = ft_strs_to_tab(argc - 1, &argv[1]);
	i = 0;
	while (i < argc - 1)
	{
		printf("%i:%s:%s\n", tab[i].size, tab[i].str, tab[i].copy);
		i++;
	}
}*/
