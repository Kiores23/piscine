/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:12:47 by amery             #+#    #+#             */
/*   Updated: 2022/07/13 19:12:55 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	if (0 <= c && c <= 9)
	{
		c = '0' + c;
	}
	write(1, &c, 1);
}

void	ft_print(int hun, int ten, int uni)
{
	ft_putchar(hun);
	ft_putchar(ten);
	ft_putchar(uni);
	if (hun != 7 || ten != 8 || uni != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	hun;
	int	ten;
	int	uni;

	hun = 0;
	while (hun <= 7)
	{
		ten = hun + 1;
		while (ten <= 9)
		{
			uni = ten + 1;
			while (uni <= 9)
			{				
				ft_print(hun, ten, uni);
				uni++;
			}
			ten++;
		}
		hun++;
	}
}
