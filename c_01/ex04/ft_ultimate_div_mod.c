/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 21:07:05 by amery             #+#    #+#             */
/*   Updated: 2022/07/16 16:44:55 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 4;
	printf("a = %i b = %i\n     Div...\n", a, b);
	ft_div_mod(&a, &b);
	printf("a = %i b = %i", a, b);
	return (0);
}*/
