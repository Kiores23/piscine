/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:56:46 by amery             #+#    #+#             */
/*   Updated: 2022/07/23 00:42:42 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int pow)
{
	int	result;

	result = nb;
	if (pow < 0)
		return (0);
	if (pow == 0)
		return (1);
	while (pow > 1)
	{
		result = result * nb;
		pow--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_iterative_power(9, 9));
}*/
