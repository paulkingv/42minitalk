/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:42:01 by pking             #+#    #+#             */
/*   Updated: 2026/02/06 19:22:19 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *p)
{
	int	count;

	count = 0;
	if (!p)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	count += 2;
	count += ft_putnbr_base((size_t)p, "0123456789abcdef");
	return (count);
}

