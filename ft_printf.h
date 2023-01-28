/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:58:13 by heolivei          #+#    #+#             */
/*   Updated: 2023/01/27 14:24:15 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <math.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

# define MIN_INT -2147483648
# define BASE_LOWER "0123456789abcdef"
# define BASE_UPPER "0123456789ABCDEF"

 int	ft_printf(const char *str, ...);
 int	ft_formats(va_list args, const char format);
 int	ft_print_char(int c);
 int	ft_print_str(char *str);
 
 int	ft_print_pointer(size_t pointer);

 int	ft_print_number(int n);

 int	ft_print_hex(size_t n, char c);

 /*
 int	ft_print_unsigned(unsigned int n);

  */

#endif
