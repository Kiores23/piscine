/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:09:49 by amery             #+#    #+#             */
/*   Updated: 2022/07/31 18:09:51 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min < max)
	{
		tab = malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
	}
	else
		tab = 0;
	return (tab);
}

/*int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(-50, 100);
	while (i <= 100)
	{
		printf("%i ", tab[i]);
		i++;
	}
	free(tab);
}*/
