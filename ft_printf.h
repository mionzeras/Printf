/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcampos- <gcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:24:38 by gcampos-          #+#    #+#             */
/*   Updated: 2023/06/29 15:42:30 by gcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include "libft/libft.h"


int		ft_printf(const char *str, ...);
int		print_func(va_list arg, const char fs);
int		pf_putchar(char c);
int		pf_putstr(char *str);
int		pf_putnbr(int nb);
int		pf_hexlen(unsigned int nb);
int		pf_puthex(unsigned int nb, const char fs);
int		pf_hexptr(unsigned long long nb);
int		pf_putptr(unsigned long long nb);
int		pf_pointer(unsigned long long ptr);
char	*pf_utoa(unsigned int nb);
int		pf_unsigned(unsigned int nb);

#endif