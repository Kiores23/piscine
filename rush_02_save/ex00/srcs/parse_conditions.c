/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_conditions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleleux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:18:54 by eleleux           #+#    #+#             */
/*   Updated: 2022/07/30 19:42:47 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	lentab(char **recipe)
{
	int	i;

	i = 0;
	while (recipe[i])
		i++;
	return (i - 1);
}

void	print_0(int len, t_word *tab)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (30000));
	ft_strncat("1", dest, 1);
	while (i < len)
	{
		ft_strncat("000", dest, 3);
		i ++;
	}
	print_value(dest, tab);
}	

void	parse_conditions2(char *number, t_word *tab)
{
	char	*str;

	str = malloc(sizeof(char) * 3);
	str[0] = number[0];
	if (number[0] < '2')
	{
		str[1] = number[1];
		if (number[0] != '0')
			print_value(str, tab);
		else if (number[1] != '0')
			print_value(str + 1, tab);
	}
	else if (number[0] >= '2')
	{
		str[1] = '0';
		print_value(str, tab);
		if (number[1] != '0')
			print_value(number + 1, tab);
	}
}

void	parse_conditions3(char *number, t_word *tab)
{
	char	temp[2];

	temp[0] = number[0];
	temp[1] = '\0';
	if (number[0] != '0')
	{
		print_value(temp, tab);
		print_value("100", tab);
	}
	parse_conditions2(number + 1, tab);
}

void	parse_conditions1(char **recipe, t_word *tab)
{
	int	i;
	int	len;

	i = 0;
	len = lentab(recipe);
	while (recipe[i])
	{
		if (!(ft_strcmp(recipe[i], "000") == 0))
		{
			if (recipe[i][0] == '0')
				recipe[i] = recipe[i] + 1;
			if (ft_strlen(recipe[i]) == 1)
				print_value(recipe[i], tab);
			if (ft_strlen(recipe[i]) == 2)
				parse_conditions2(recipe[i], tab);
			if (ft_strlen(recipe[i]) == 3)
				parse_conditions3(recipe[i], tab);
			if (len != 0)
				print_0(len, tab);
		}
		i ++;
		len --;
	}
	ft_putstr("\n");
}
