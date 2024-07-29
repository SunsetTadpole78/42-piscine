/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:33:55 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/25 19:24:38 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int count, char **args, int start)
{
	int		i;
	int		j;
	char	*temp;

	i = start;
	while (i < count - start)
	{
		j = start;
		while (j < count - start)
		{
			if (ft_strcmp(args[j], args[j + 1]) > 0)
			{
				temp = args[j + 1];
				args[j + 1] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort(argc, argv, 1);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
