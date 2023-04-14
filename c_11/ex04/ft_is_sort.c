/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:04:33 by amery             #+#    #+#             */
/*   Updated: 2022/08/04 18:22:28 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_nbr_cmp(int n1, int n2)
{
	return (n1 - n2);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	y;

	i = 1;
	y = 0;
	if (length == 2)
		return (1);
	while (i < length && y != 1)
	{
		if (f(tab[i], tab[i - 1]) < 0)
			y++;
		i++;
	}
	if (y == 0)
		return (1);
	while (y < length)
	{
		if (f(tab[y], tab[y - 1]) > 0)
			return (0);
		y++;
	}
	return (1);
}
/*
int	main(void)
{
	int tab[] = {0, 1, 7, 100, 65};
	printf("%i", ft_is_sort(tab, 5, ft_nbr_cmp));
}*/
