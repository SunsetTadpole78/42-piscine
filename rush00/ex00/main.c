/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlongin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:46:27 by jlongin           #+#    #+#             */
/*   Updated: 2024/07/21 18:51:10 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putstr(char *str);
void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

void	run_rush(int rush_id, int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		ft_putstr("Invalid Argument, x & y limits: ]0;INT_MAX]\n");
		return ;
	}
	if (rush_id == 0)
		rush00(x, y);
	else if (rush_id == 1)
		rush01(x, y);
	else if (rush_id == 2)
		rush02(x, y);
	else if (rush_id == 3)
		rush03(x, y);
	else if (rush_id == 4)
		rush04(x, y);
	else
	{
		ft_putstr("Rush not found.\n");
	}
}

int	main(int argc, char **argv)
{
	argc--;
	if (argc != 3)
	{
		ft_putstr(" Usage: ");
		ft_putstr(argv[0]);
		ft_putstr(" [rush_id] [x] [y]\n");
		return (1);
	}
	run_rush(ft_atoi(argv[1]), ft_atoi(argv[2]), ft_atoi(argv[3]));
	return (0);
}
