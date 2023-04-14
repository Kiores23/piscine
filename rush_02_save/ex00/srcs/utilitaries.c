/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilitaries.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:22:04 by tandre            #+#    #+#             */
/*   Updated: 2022/07/30 19:00:17 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i ++;
	}
}

char	*ft_strncat(char *src, char *dest, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j ++;
	while (i < n)
	{
		dest[j] = src[i];
		j ++;
		i ++;
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
