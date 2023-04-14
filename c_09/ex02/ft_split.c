/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 16:06:57 by amery             #+#    #+#             */
/*   Updated: 2022/08/02 22:46:17 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *str, char *charset)
{
	char	*strcp;
	int		i;
	int		s;

	i = 0;
	s = 0;
	while (!ft_check_sep(str[i], charset) && str[i])
		i++;
	strcp = malloc(sizeof(char) * i);
	i = -1;
	while (!ft_check_sep(str[++i + s], charset) && str [i + s])
		strcp[i] = str[i + s];
	strcp[i] = '\0';
	return (strcp);
}

int	countsplit(char *str, char *charset, int i, int s)
{
	int	c;

	if (!str[i])
		return (0);
	c = 1;
	while (ft_check_sep(str[s], charset))
		s++;
	while (str[i])
	{
		if ((ft_check_sep(str[i], charset))
			&& !(ft_check_sep(str[i - 1], charset))
			&& str[i + 1] != '\0' && str[i - 1] != '\0')
			c++;
		else if (ft_check_sep(str[i], charset)
			&& str[i + 1] == '\0' && c != 1
			&& ft_check_sep(str[i - 1], charset))
			c--;
		i++;
	}
	if (s == i)
		return (0);
	return (c);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_tab;
	int		c_split;
	int		i;
	int		s;

	s = 0;
	i = -1;
	c_split = countsplit(str, charset, 0, 0) + 1;
	if (c_split == 1)
		i = c_split - 1;
	split_tab = malloc(sizeof(char *) * c_split);
	while (++i < c_split - 1)
	{
		while (ft_check_sep(str[0], charset))
			str++;
		split_tab[i] = ft_strdup(str, charset);
		while (!ft_check_sep(str[0], charset) && charset[0])
			str++;
	}
	split_tab[c_split - 1] = malloc(sizeof(char *));
	split_tab[c_split - 1] = NULL;
	return (split_tab);
}

//Main pour tester a supr sans oublier stdio.h
int	main(int argc, char **argv)
{
	char	**tab_check;
	int		i;
	(void)	argc;

	i = 0;
	tab_check = ft_split(argv[1], argv[2]);
	while(tab_check[i - 1] || i == 0)
	{
		printf("%s\n", tab_check[i]);
		i++;
	}
	free(tab_check);
	return (0);
}
