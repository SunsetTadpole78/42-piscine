/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:33:46 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/18 20:32:53 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	av;
	int	bv;

	av = *a;
	bv = *b;
	*a = av / bv;
	*b = av % bv;
}

/*int	main(void)
{
	int	y;
	int	z;

	y = 50;
	z = 3;
	printf("%d", y);
	printf("%d", z);
	ft_ultimate_div_mod(&y, &z);
	printf("%d", y);
	printf("%d", z);
}*/
