#include <stdio.h>
#include <stdlib.h>
#include "printf.h"

int	ft_putchar(int c)
{	
	write(1, &c, 1);
	return (1);
}

int ft_print_number(int n)
{
    int nbr_chr;
    int temp;

    nbr_chr = 0;
    temp = n;
    if (n < 0)
    {
        ft_putchar('-');
        nbr_chr++;
        temp = -temp;
    }
    if (temp >= 10){
    	nbr_chr += ft_print_number(temp / 10);
    }
    ft_putchar((temp % 10) + '0');
    nbr_chr++;

    return (nbr_chr);
}

int	 main(void)
{	
	return (ft_print_number(ft_print_number(222222)));
}
