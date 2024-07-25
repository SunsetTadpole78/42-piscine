/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:49:50 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/23 15:52:13 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c < ' ' || c > '~')
	{
		write(1, "\\", 1);
		write(1, &hex[c / 16], 1);
		write(1, &hex[c % 16], 1);
	}
	else
		write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	write(1, "\n", 1);
	ft_putstr_non_printable("\x81\xbe");
}*/
