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

int	ft_putchar(int c)
{
	write(1, &c, 1);
	
	return(1);
}

int	ft_formats(va_list args, const char format)
{
	int	qcp;

	qcp = 0;
	if (formats == 'c')
		qcp += ft_putchar(va_arg(args, int));
	if else (formats == 's')
		qcp += ft_putstr(va_arg(args, char *));
	if else (formats == 'p')
		qcp += ft_putptr(va_arg(args, unsigned long long));
	if else (formats == 'd' || formats == 'i')
		qcp += ft_putnbr(va_arg(args, int));
	if else (formats == 'u')
		qcp += ft_put_unsigned(va_arg(args, unsigned int));
	if else (formats == 'x' || formats == 'X')
		qcp += ft_put_hex(va_arg(args, unsigned int), format);
	if else (formats == '%')
		qcp += ft_putchar('%');
	
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
			qcp = qcp + ft_putchar(str[i]);
			i++;1
		}
	}
	va_end(args);
	return (qcp);
}	
