/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:07:05 by amery             #+#    #+#             */
/*   Updated: 2022/07/14 22:55:19 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("a = %i b = %i \ndiv = %i mod = %i\nEz\n", a, b, div, mod);
	return (0);
}*/
