/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:22:56 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/18 19:31:56 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	s1;
	int	s2;

	s1 = -1;
	s2 = -1;
	printf("%d", s1);
	printf("%d", s2);
	ft_div_mod(5, 2, &s1, &s2);
	printf("%d", s1);
	printf("%d", s2);

	s1 = -1;
	s2 = -1;
	printf("%d", s1);
	printf("%d", s2);
	ft_div_mod(785, 5, &s1, &s2);
	printf("%d", s1);
	printf("%d", s2);
}*/
