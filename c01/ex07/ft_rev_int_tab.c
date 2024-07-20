/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:00:48 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/19 11:00:58 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	arr[5] = {1, 3, 5, 7, 9};
	int	arr2[6] = {2, 1, 4, 3, 5, 6};
	int	i;

	ft_rev_int_tab(arr, 5);
	ft_rev_int_tab(arr2, 6);

	i = 0;
	while(i != 5)
	{
		printf("%i", arr[i]);
		i++;
	}

	i = 0;
	while(i != 5)
	{
		printf("%i", arr2[i]);
	i++;
	}

}*/
