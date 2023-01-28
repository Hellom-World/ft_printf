#include "ft_printf.h"
#include <stdio.h>

int main() {
    char c = 'A';
    char s[] = "Hello, World!";
    int i = -10;
    int d = 3.14;
    int x = 255;
    int *p = &i;
    unsigned int u = 10;

   ft_printf("Unsigned integer: %u\n", u);
   ft_printf("Pointer: %p\n", (void *)p);
   ft_printf("Character: %c\n", c);
   ft_printf("String: %s\n", s);
   ft_printf("Integer: %i\n", i);
   ft_printf("Double: %d\n", d);
   ft_printf("Hexadecimal (lowercase): %x\n", x);
   ft_printf("Hexadecimal (uppercase): %X\n", x);
   ft_printf("Percent sign: %%\n\n");

   printf("Unsigned integer: %u\n", u);
   printf("Pointer: %p\n", (void *)p);
   printf("Character: %c\n", c);
   printf("String: %s\n", s);
   printf("Integer: %i\n", i);
   printf("Double: %d\n", d);
   printf("Hexadecimal (lowercase): %x\n", x);
   printf("Hexadecimal (uppercase): %X\n", x);
   printf("Percent sign: %%\n");


    return 0;
}

