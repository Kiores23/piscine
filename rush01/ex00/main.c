/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 11:29:26 by amery             #+#    #+#             */
/*   Updated: 2022/07/24 16:01:36 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		grid[6][6];
void	ft_putchar(char c);

void ft_grid_init(void)
{
	int	i;
	int	y;

	i = 0;
	while (i < 6)
	{
		y = 0;
		while (y < 6)
		{
			grid[i][y] = 0;
			y++;
		}
		i++;
	}
}

void	ft_print_grid(void)
{
	int	i;
	int	y;

	i = 1;
	while (i < 5)
	{
		y = 1;
		while (y < 5)
		{
			ft_putchar(grid[i][y] + '0');
			ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(void)
{
	int	i;
	int	y;

	printf("Grid declare.\n");
	printf("\nGrid initialization.\n");
	i = 0;
	while (i < 6)
	{
		y = 0;
		while (y < 6)
		{
			grid[i][y] = 0;
			y++;
		}
		i++;
	}
	printf("Grid initialize.\n");
	printf("\nGird display : \n\n");
	ft_print_grid();
	printf("\n\nGrid release.");
	printf("\nGrid released.");
	printf("\nTrue.\n");

}
