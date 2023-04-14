/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:24:41 by amery             #+#    #+#             */
/*   Updated: 2022/08/04 16:25:27 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_setop(char *op, int (**f)(int, int))
{
	op[0] = '+';
	op[1] = '-';
	op[2] = '/';
	op[3] = '*';
	op[4] = '%';
	f[0] = ft_add;
	f[1] = ft_sub;
	f[2] = ft_div;
	f[3] = ft_mul;
	f[4] = ft_mod;
}

int	main(int argc, char **argv)
{
	char	op[5];
	int		(*f[5])(int, int);
	int		nbrs[3];
	int		i;

	if (argc != 4)
		return (0);
	ft_setop(op, f);
	nbrs[0] = ft_atoi(argv[1]);
	nbrs[1] = ft_atoi(argv[3]);
	nbrs[2] = 0;
	i = -1;
	while (op[++i] && ft_strlen(argv[2]) == 1)
	{
		if (argv[2][0] == op[i])
		{
			nbrs[2] = f[i](nbrs[0], nbrs[1]);
			if ((op[i] == '/' || op[i] == '%')
				&& nbrs[1] == 0)
				return (0);
		}
	}
	ft_putnbr(nbrs[2]);
	ft_putchar('\n');
	return (0);
}
