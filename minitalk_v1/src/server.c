/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pking <pking@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:52:17 by pking             #+#    #+#             */
/*   Updated: 2026/05/03 21:33:32 by pking            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//bc we paste to 00000000, we need to use | bit comparison. 
// bitshifting: the 1 is the bit; bits is the # of spaces we shift.
void    handler(int signal)
{
    static  char c;
    static  int bit;

    c = 0;
    bit = 0;

    if (signal == SIGUSR1)
        c = c | (0x01 << bit);
    bit++;
    if (bit == 8)
    {
        if (c == '\0')
            ft_printf("\n");
        else
        ft_printf("%c", c);
    c = 0;
    bit = 0;
    }
}
int main (int argc, char **argv)
{
    if (argc != 1)
    {
        ft_printf("Error: Argument Count != 1");
        return (1);
    }
    ft_printf("PID: %d\n", getpid());
    signal(SIGUSR1, handler);
    signal(SIGUSR2, handler);
    while (1)
        pause();
    return (0);
}
