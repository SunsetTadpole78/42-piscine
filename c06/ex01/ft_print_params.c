/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:17:29 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/25 14:23:45 by lroussel         ###   ########.fr       */
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

void	ft_printargs(char **args, int start, char *separator)
{
	int	i;

	i = start;
	while (args[i])
	{
		ft_putstr(args[i]);
		ft_putstr(separator);
		i++;
	}
}

int	main(int argc, char **argv)
{
	argc = 0;
	ft_printargs(argv, 1, "\n");
	return (0);
}
