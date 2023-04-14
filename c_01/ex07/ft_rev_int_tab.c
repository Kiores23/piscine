/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 11:33:41 by amery             #+#    #+#             */
/*   Updated: 2022/07/16 14:43:49 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	v;
	int	i;

	i = 0;
	while (i < size - i -1)
	{
		v = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = v;
		i++;
	}
}

/*int	main(void)
{
	int	size;

	size = 5;

	int tab[size];
	int i;

	printf("Mon tableau :  ");
	i = 0;
	while (i < size)
	{
		tab[i] = i;
		printf("%i ", tab[i]);
		i++;
	}
	ft_rev_in_tab(tab, size);
	i = 0;
	printf("\nMon tableau inverse : ");
	while (i < size)
	{
		printf("%i ", tab[i]);
		i++;
	}
}*/
