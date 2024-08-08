/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lroussel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:48:31 by lroussel          #+#    #+#             */
/*   Updated: 2024/07/31 17:07:37 by lroussel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	calc_abs(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	return (-nbr);
}

# define ABS(Value) (calc_abs(Value))

#endif
