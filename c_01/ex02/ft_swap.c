/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:21:07 by amery             #+#    #+#             */
/*   Updated: 2022/07/14 21:06:49 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 23;
	printf("a = %i b = %i \n   Swap ...\n", a, b);
	ft_swap(&a, &b);
	printf("a = %i b = %i \nLes pointeurs ont ete utiliser promis !", a, b);
}*/
