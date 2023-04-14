/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:48:15 by amery             #+#    #+#             */
/*   Updated: 2022/07/25 16:57:39 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_factorial(-2));
	printf("%i\n", ft_recursive_factorial(0));
	printf("%i\n", ft_recursive_factorial(1));
	printf("%i\n", ft_recursive_factorial(3));
	printf("%i\n", ft_recursive_factorial(5));
	printf("%i\n", ft_recursive_factorial(8));
	printf("%i\n", ft_recursive_factorial(17));
}
