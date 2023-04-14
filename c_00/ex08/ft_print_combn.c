/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:23:20 by amery             #+#    #+#             */
/*   Updated: 2022/07/21 19:31:41 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbrn(int *nbr, int n)
{
	int		i;

	i = 9 - n;
	while (i < 9)
	{
		ft_putchar(nbr[i] + '0');
		i++;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_combn(int n)
{
	int	nbr[9];
	int	place;
	
	while (nbr[9 - n] != 10 - n)
	{
		place = 8;
		while (place >= 9 - n)
		{
			if (nbr[place] != place + 1 && place != 9 - n)
				nbr[place] = nbr[place - 1] + 1;
			else if (place == 9 - n && nbr[place + 1] != 0 && n != 1)
				:qnbr[place] = nbr[place + 1] - 1;
			while (nbr[place] <= place + 1
				&& (nbr[place] < nbr[place + 1] - 1 || place == 8))
			{
				//if (place == 8)
				ft_putnbrn(nbr, n);
				if (nbr[place] <= place + 1)
					nbr[place]++;
			}
			if (nbr[place] == 10)
				nbr[place] == nbr[place - 1] + 1;
			place--;
		}
		printf("\n%i , %i, %i\n", nbr[6], nbr[7], nbr[8]);
	}
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
