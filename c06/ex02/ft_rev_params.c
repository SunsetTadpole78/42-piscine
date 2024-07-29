/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:26:16 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/25 18:29:01 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_printargs_rev(char **args, int end, char *separator)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	i = i - end;
	while (i > 0)
	{
		ft_putstr(args[i]);
		ft_putstr(separator);
		i -= 1;
	}
}

int	main(int argc, char **argv)
{
	argc = 0;
	ft_printargs_rev(argv, 1, "\n");
	return (0);
}
