/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:22:36 by pking             #+#    #+#             */
/*   Updated: 2026/02/07 21:41:49 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned int nb, char *base)
{
	size_t 	base_len;
	int 	count;

	count = 0;
	base_len = ft_strlen(base);
	if (!base || base_len < 2)
		return (0);

	if (nb >= base_len)
	{
		count += ft_putnbr_base (nb / base_len, base);
		count += ft_putnbr_base (nb % base_len, base);
	}
	else
	{
		ft_putchar_fd(base[nb], 1);
		count++;
	}
	return (count);
}
