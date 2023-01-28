#include "ft_printf.h"

int	ft_print_hex(size_t n, char c)
{
	int	len;

	len = (int)(log((double)n) / log(16)) + 1;
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
