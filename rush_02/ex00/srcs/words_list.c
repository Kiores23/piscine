/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   words_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 09:31:36 by tandre            #+#    #+#             */
/*   Updated: 2022/07/30 19:31:04 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	get_tab(char **tab_str)
{
	int	i;

	i = 0;
	while (tab_str[i] != 0)
		i ++;
	return (i);
}

char	*get_key(char *str)
{
	int		i;
	char	*key;

	i = 0;
	while (str[i])
		i ++;
	key = malloc(sizeof(char) * i);
	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != ':')
	{
		key[i] = str[i];
		i ++;
	}
	key[i] = '\0';
	return (key);
}

char	*get_value(char *str)
{
	int		i;
	int		j;
	char	*value;

	i = 0;
	j = 0;
	value = malloc(sizeof(char) * ft_strlen(str));
	while (str[i] != ':')
		i ++;
	i ++;
	while (str[i] == ' ' || str[i] == '\t')
		i ++;
	while (str[i] && str[i] != '\n')
	{
		value[j] = str[i];
		j ++;
		i ++;
	}
	return (value);
}

t_word	*create_words_list(char **tab_str)
{
	int		i;
	t_word	*word_tab;
	int		size;

	if (!tab_str)
		return (0);
	size = get_tab(tab_str);
	i = 0;
	word_tab = malloc(sizeof(t_word) * get_tab(tab_str));
	while (i < size)
	{
		word_tab[i].key = get_key(tab_str[i]);
		word_tab[i].value = get_value(tab_str[i]);
		i ++;
	}
	word_tab[i].value = NULL;
	return (word_tab);
}

int	print_value(char *str_key, t_word *tab)
{
	int	i;

	i = 0;
	while (tab[i].value != NULL)
	{
		if (ft_strcmp(tab[i].key, str_key) == 0)
		{
			ft_putstr(tab[i].value);
			ft_putstr(" ");
			return (1);
		}
		i ++;
	}
	ft_putstr("Dict Error\n");
	return (-1);
}
