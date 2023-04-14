/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:14:43 by amery             #+#    #+#             */
/*   Updated: 2022/07/25 11:17:35 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	n = '\n';
	write(1, &n, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc;
	while (--i > 0)
		ft_putstr(argv[i]);
	return (0);
}
