/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:59:35 by amery             #+#    #+#             */
/*   Updated: 2022/08/03 14:36:06 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tab_r;

	i = 0;
	tab_r = malloc(sizeof(int) * length);
	while (tab[i])
		i++;
	if (length > i)
		return (NULL);
	i = -1;
	while (++i < length)
	{
		tab_r[i] = (*f)(tab[i]);
	}
	return (tab_r);
}
/*
int	main(void)
{
	int	tab[] = {0, 42, 70000, -9111};
	int	*tab2;

	tab2 = ft_map(tab, 4, ft_plus_un);
	printf("%i, %i, %i, %i", tab2[0], tab2[1], tab2[2], tab2[3]);
	free(tab2);
}*/
