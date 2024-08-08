/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:57:18 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/30 09:30:12 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/* #include <stdio.h> */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	*range = malloc(sizeof(int) * size);
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/*int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	printf("%i : ", ft_ultimate_range(&tab, 5, 14));
	while (tab[i])
	{
		printf("%i ", tab[i]);
		i++;
	}
	return (0);
}*/
