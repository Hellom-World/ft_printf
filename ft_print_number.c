/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:37:21 by heolivei          #+#    #+#             */
/*   Updated: 2023/01/29 13:54:35 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(int n)
{
	int	nbr_chr;
	int	temp;

	nbr_chr = 0;
	temp = n;
	if (n == MIN_INT)
		return (ft_print_str("-2147483648"));
	if (n < 0)
	{
		ft_print_char('-');
		nbr_chr++;
		temp = -temp;
	}
	if (temp >= 10)
		nbr_chr += ft_print_number(temp / 10);
	ft_print_char((temp % 10) + '0');
	nbr_chr++;
	return (nbr_chr);
}
