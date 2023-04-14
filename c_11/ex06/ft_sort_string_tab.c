/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:31:59 by amery             #+#    #+#             */
/*   Updated: 2022/08/04 18:01:57 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		j = i;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	(void) argc;
	
	i = 0;
	ft_sort_string_tab(argv);
	while (argv[++i])
		printf("argv[%i] = %s\n", i, argv[i]);
}
