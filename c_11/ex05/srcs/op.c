/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:09:40 by amery             #+#    #+#             */
/*   Updated: 2022/08/04 16:03:07 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>

int	ft_add(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	return (a / b);
}

int	ft_mul(int a, int b)
{
	return (a * b);
}

int	ft_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (a % b);
}
