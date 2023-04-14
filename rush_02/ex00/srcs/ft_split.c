/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 14:44:42 by tandre            #+#    #+#             */
/*   Updated: 2022/08/02 17:57:48 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i ++;
	}
	return (0);
}

int	count_splits(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset) && str[i])
			i ++;
		while (!is_sep(str[i], charset) && str[i])
			i ++;
		count ++;
	}
	if (is_sep(str[i - 1], charset))
		count --;
	return (count);
}

int	find_end(char *str, char *charset, int i)
{
	while (!is_sep(str[i], charset) && str[i])
		i ++;
	return (i);
}

void	fill_str(char *dest, char *src, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
	{
		dest[i] = src[start];
		i ++;
		start ++;
	}
	dest[i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		start;
	int		end;
	int		splits_n;
	int		i;
	char	**res;

	splits_n = count_splits(str, charset);
	i = 0;
	start = 0;
	res = malloc(sizeof(char *) * (splits_n + 1));
	while (i < splits_n)
	{
		while (str[start] && is_sep(str[start], charset))
			start ++;
		end = find_end(str, charset, start);
		res[i] = malloc(sizeof(char) * (end - start + 1));
		fill_str(res[i], str, start, end);
		start = end;
		i ++;
	}
	res[i] = 0;
	return (res);
}

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
