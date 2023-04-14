/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 00:36:20 by amery             #+#    #+#             */
/*   Updated: 2022/07/25 17:11:39 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	while (nb != 1)
	{
		nb--;
		result = result * nb;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_factorial(-2));
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(1));
	printf("%i\n", ft_iterative_factorial(3));
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(8));
	printf("%i\n", ft_iterative_factorial(17));
}
