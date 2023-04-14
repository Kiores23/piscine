/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 00:46:56 by amery             #+#    #+#             */
/*   Updated: 2022/07/23 00:53:17 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int pow)
{
	if (pow == 0)
		return (1);
	if (pow < 0)
		return (0);
	return (nb * ft_recursive_power(nb, pow - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_power(3, 6));
}*/
