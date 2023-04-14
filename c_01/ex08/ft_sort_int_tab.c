/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:38:29 by amery             #+#    #+#             */
/*   Updated: 2022/07/17 10:13:01 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	a;

	i = 0;
	while (i < size)
	{
		y = i + 1;
		while (y < size)
		{
			if (tab[i] > tab[y])
			{
				a = tab[i];
				tab[i] = tab[y];
				tab[y] = a;
			}
			y++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[] = { -2, 3, 7, 1, 1};
	int	i;

	i = 0;
	ft_sort_in_tab(tab, 5);
	while (i < 5)
	{
		printf("%i", tab[i]);
		i++;
	}
	return (0);
}*/
