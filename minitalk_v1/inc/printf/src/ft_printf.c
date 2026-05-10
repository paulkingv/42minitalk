/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:51:00 by pking             #+#    #+#             */
/*   Updated: 2026/05/10 19:38:24 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion(va_list args, const char f)
{
	int	count;

	count = 0;
	if ((f) == 'c')
		count += ft_putchar_fd_int(va_arg(args, int), 1);
	else if ((f) == 's')
		count += ft_putstr(va_arg(args, char *));
	else if ((f) == 'p')
		count += ft_putpointer(va_arg(args, void *));
	else if ((f) == 'd' || (f) == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if ((f) == 'u')
		count += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	else if ((f) == 'x')
		count += ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if ((f) == 'X')
		count += ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if ((f) == '%')
		count += ft_putchar_fd_int('%', 1);
	else
		return (0);
	return (count);
}

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		i;
	int		printed_count;

	i = 0;
	printed_count = 0;
	va_start(args, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			printed_count += conversion(args, f[i + 1]);
			i++;
		}
		else
			printed_count += ft_putchar_fd_int(f[i], 1);
		i++;
	}
	va_end(args);
	return (printed_count);
}
