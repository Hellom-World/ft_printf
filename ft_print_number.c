/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:37:21 by heolivei          #+#    #+#             */
/*   Updated: 2023/01/27 14:39:56 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_number(int n)
{
	int	nbr_chr;
	int	temp;

	nbr_chr = 0;
	temp = n;
	if (n < 0)
	{
		ft_putchar('-');
		nbr_chr++;
		temp = -temp;
	}
	if (temp >= 10)
		nbr_chr += ft_print_number(temp / 10);
	ft_putchar((temp % 10) + '0');
	nbr_chr++;
	return (nbr_chr);
}
