/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:45:18 by amery             #+#    #+#             */
/*   Updated: 2022/07/29 20:53:06 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = malloc(sizeof(char) * tab[i].size);
		ft_strcpy(tab[i].copy, av[i]);
		if (tab[i].copy == 0)
			return (0);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	ft_show_tab(tab);
	return (tab);
}

int	main(int argc, char **argv)
{
	free(ft_strs_to_tab(argc - 1, argv + 1));
}
