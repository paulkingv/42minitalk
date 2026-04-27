/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:52:12 by pking             #+#    #+#             */
/*   Updated: 2026/04/27 15:13:22 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Client needs to be a program that recieves two arguments (argv), one is the PID, the other is the string
void	encoder(int pid, char i)
{

}

int	main(int argc, char *argv[])
{
	int pid;
	int i;

	i = -1;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (!pid)
		{
			ft_printf("%s Integer PID too large or small");
			return (1);
		}
		while (argv [2][i++] != '\0')
			encoder(pid, argv[2][i])
		encoder(pid, '\n');
		return (0);
	}	
	else
	{
		ft_printf("%s Wrong Format, try ./client <PID> <MESSAGE>");
		return (1);
	}
}