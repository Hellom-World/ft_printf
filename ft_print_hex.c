#include "ft_printf.h"

int	ft_hex_len(size_t n)
{
	int	len;

	len = 1;

	while (n > 15)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_print_hex(size_t n, char c)
{
	int	len;
	
	len = ft_hex_len(n);

	if (n > 15)
	{
		ft_print_hex(n / 16, c);
		ft_print_hex(n % 16, c);
	}
	else
	{
		if(c == 'x')
			ft_print_char(BASE_LOWER[n]);
		else
			ft_print_char(BASE_UPPER[n]);
	}
	return (len);
}
