/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 18:41:43 by amery             #+#    #+#             */
/*   Updated: 2022/07/14 17:21:00 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	if (c >= 0 && c <= 9)
	{
		c = '0' + c;
	}
	write (1, &c, 1);
}

void	ft_print(int ten1, int uni1, int ten2, int uni2)
{
	if (((ten1 * 10) + uni1) < ((ten2 * 10) + uni2))
	{
		ft_putchar(ten1);
		ft_putchar(uni1);
		ft_putchar(' ');
		ft_putchar(ten2);
		ft_putchar(uni2);
		if (ten1 != 9 || ten2 != 9 || uni1 != 8 || uni2 != 9)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}	
	}
}

void	ft_while(int ten1, int uni1, int ten2, int uni2)
{
	while (ten1 <= 9)
	{
		while (uni1 <= 9)
		{
			while (ten2 <= 9)
			{
				while (uni2 <= 9)
				{
					ft_print(ten1, uni1, ten2, uni2);
					uni2++;
				}
				uni2 = 0;
				ten2++;
			}
			ten2 = 0;
			uni1++;
		}
		uni1 = 0;
		ten1++;
	}
}

void	ft_print_comb2(void)
{
	int	ten1;
	int	ten2;
	int	uni1;
	int	uni2;

	ten1 = 0;
	uni1 = 0;
	ten2 = 0;
	uni2 = 0;
	ft_while(ten1, uni1, ten2, uni2);
}
