/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:49:47 by amery             #+#    #+#             */
/*   Updated: 2022/07/31 19:39:53 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_check_atoi(char *nbr)
{
	int				i;
	long long int	result;

	i = 0;
	result = 0;
	while (nbr[i] >= '0' && nbr[i] <= '9' && i < 11)
	{	
		if (!(nbr[i + 1] >= '0' && nbr[i + 1] <= '9')
				&& nbr[i + 1] != '\0' && nbr[i + 1] != ' ')
			return (0);
		result = result * 10 + nbr[i] - 48;
		i++;
	}
	if (result > 4294967295)
		return (0);
	return (1);
}

char	*ft_mallatoi(char *list, int *size)
{
	*size = *size + (*size - 1) / 3;
	list = malloc(sizeof(char) * (*size));
	return (list);
}

char	*ft_space_atoi(char *nbr, char *list)
{
	int	size_base;
	int	size;
	int	i;

	i = 0;
	size_base = 0;
	while (nbr[size_base] >= '0' && nbr[size_base] <= '9')
		size_base = size_base + 1;
	size = size_base;
	list = ft_mallatoi(list, &size);
	list[size] = '\0';
	size--;
	size_base--;
	while (size >= 0 && size_base >= 0)
	{
		list[size--] = nbr[size_base--];
		i++;
		if (i == 3 && size != 0)
		{
			list[size--] = ' ';
			i = 0;
		}
	}
	return (list);
}

char	**ft_char_atoi(char *nbr)
{
	int		i;
	char	*list;

	list = 0;
	i = 0;
	while (nbr[0] == ' ' || (nbr[0] >= 9 && nbr[0] <= 13))
		nbr++;
	if (nbr[0] == '+' || nbr[0] == '-')
	{
		if (nbr[0] == '-')
			return (0);
		nbr++;
	}
	while (nbr[0] == '0')
		nbr++;
	if (!(nbr[0] >= '1' && nbr[0] <= '9'))
		return (0);
	if (!ft_check_atoi(nbr))
		return (0);
	list = ft_space_atoi(nbr, list);
	return (ft_split(list, " "));
}
