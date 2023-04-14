/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:49:47 by amery             #+#    #+#             */
/*   Updated: 2022/07/30 13:48:45 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_check_atoi(char *nbr)
{
	int				i;
	long long int	result;

	i = 0;
	result = 0;
	while (nbr[i] >= '0' && nbr[i] <= '9' && i < 11)
	{	
		result = result * 10 + nbr[i] - 48;
		i++;
	}
	if (result > 4294967295)
		return (0);
	return (1);
}

char	**ft_mallatoi(char *nbr, char **list, int *size)
{
	int	i;
	
	i = 0;
	*size = 0;
	while (nbr[*size] >= '0' && nbr[*size] <= '9')
		*size = *size + 1;
	list = malloc(sizeof(char *) * (*size));
	i = 0;
	while (i < *size)
	{
		list[i] = malloc(sizeof(char) * (*size - i + 1));
		i++;
	}
	return (list);
}

char	**ft_sep_atoi(char *nbr, char **list)
{
	int	size;
	int pow;
	int	i;
	int	j;

	i = 0;
	j = 0;
	list = ft_mallatoi(nbr, list, &size);
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (j == 0)
				list[i][j] = nbr[i];
			else
				list[i][j] = '0';
			j++;
		}
		list[i][j] = '\0';
		i++;
	}
	return (list);
}

char	**ft_char_atoi(char *nbr, char **list)
{
	int		size;
	int		i;

	i = 0;
	while (nbr[0] == ' ' || (nbr[0] >= 9 && nbr[0] <= 13))
		nbr++;
	if (nbr[0] == '+' || nbr[0] == '-')
	{
		if (nbr[0] == '-')
			return (0);
		nbr++;
	}
	if (!(nbr[0] >= '0' && nbr[0] <= '9'))
		return (0);
	if (!ft_check_atoi(nbr))
		return (0);
	list = ft_sep_atoi(nbr, list);
	return (list);
}
/*
int	main(int argc, char **argv)
{
	char	**tab;
	int		i;

	if (argc != 2)
		return (0);
	tab = ft_char_atoi(argv[1], tab);
	i = 0;
	while (i < 3)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
