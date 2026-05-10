/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:52:17 by pking             #+#    #+#             */
/*   Updated: 2026/05/10 19:36:11 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	process_char(char c, char **string)
{
	char	tmp[2];

	tmp[1] = '\0';
	if (!*string)
		*string = ft_strdup("");
	if (c != '\0')
	{
		tmp[0] = c;
		*string = ft_strjoin_free(*string, tmp, 1, 0);
	}
	else
	{
		ft_printf("%s\n", *string);
		free(*string);
		*string = NULL;
	}
}

// bc we paste to 00000000, we need to use | bit comparison.
// bitshifting: the 1 is the bit; bits is the # of spaces we shift.
void	handler(int signal)
{
	static char	c;
	static int	bit;
	static char	*string;

	if (signal == SIGUSR1)
		c = c | (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		process_char(c, &string);
		c = 0;
		bit = 0;
	}
}

int	main(void)
{
	ft_printf("PID: %d\n", getpid());
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while (1)
		pause();
	return (0);
}
