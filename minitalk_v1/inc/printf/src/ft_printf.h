/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 19:30:43 by pking             #+#    #+#             */
/*   Updated: 2026/05/06 15:30:34 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int		ft_putchar_fd_int(char c, int fd);
int		ft_putstr(char *s);
int		ft_putnbr(int nb);
int		conversion(va_list args, const char format);
int		ft_putpointer(void *p);
int		ft_putnbr_base(unsigned int nb, char *base);
size_t	ft_strlen(const char *str);
int		ft_printf(const char *f, ...);

#endif
