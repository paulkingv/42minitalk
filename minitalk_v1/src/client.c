/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:52:12 by pking             #+#    #+#             */
/*   Updated: 2026/05/06 17:01:32 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//bc we copy, we need to use & bit comparison. 
void	encoder(int pid, char i)
{
	int bit;

	bit = 0;
	while (bit < 8)
	{
		if ((i & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill (pid, SIGUSR2);
		usleep(300);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int pid;
	int i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
		{
			ft_printf("Integer PID too large or small");
			return (1);
		}
		while (argv [2][i] != '\0')
		{
			encoder(pid, argv[2][i]);
			i++;
		}
		encoder(pid, '\0');
		return (0);
	}	
	else
	{
		ft_printf("Wrong Argument Count. Run as ./client <PID> <MESSAGE>");
		return (1);
	}
}