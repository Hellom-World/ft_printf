#include "ft_printf.h"

int	ft_print_pointer(size_t ptr)
{	
	int	len;

	if (ptr == 0)
	{
		ft_print_str("nil");
		return (5);
	}
	len = ft_print_str("0x");
	len += ft_print_hex(ptr, 'x');
	return (len);
}
