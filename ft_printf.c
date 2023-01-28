/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:28:31 by heolivei          #+#    #+#             */
/*   Updated: 2023/01/18 14:51:22 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdarg.h"

int	ft_print_str(char *str)
{
	int	i;
	int	qcp;

	i = 0;
	qcp = 0;

	if(!str)
	{
		ft_print_str("(null)");
		return (6);
	}
	while (str[i])
	{
		qcp += write(1, &str[i], sizeof(char));
		i++;
	}
	return (qcp);
}

int	ft_print_char(int c)
{
	write(1, &c, 1);
	
	return(1);
}

int	ft_formats(va_list args, const char format)
{
	int	qcp;
	
	qcp = 0;
	if (format == 'c')
		qcp += ft_print_char(va_arg(args, int));
	else if (format == 's')
		qcp += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		qcp += ft_print_pointer(va_arg(args, size_t));
	else if (format == 'd' || format == 'i')
		qcp += ft_print_number(va_arg(args, int));
	else if (format == 'u')
			qcp += ft_print_number(va_arg(args, size_t));
	else if (format == 'x' || format == 'X')
		qcp += ft_print_hex(va_arg(args, size_t), format);
	else if (format == '%')
		qcp += ft_print_char('%');
	
	return (qcp);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	qcp;
	va_list	args;

	i = 0;
	qcp = 0;
	va_start(args, str);

	while (str[i])
	{
		if (str[i] == '%')
		{
			qcp = qcp + ft_formats(args, str[i + 1]);
			i++;	
		}
		else
		{
			qcp = qcp + ft_print_char(str[i]);
		}
	}
	va_end(args);
	return (qcp);
}	
