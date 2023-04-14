/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:08:14 by amery             #+#    #+#             */
/*   Updated: 2022/11/12 16:44:45 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		s;
	char	*strjoin;

	i = 0;
	s = 0;
	while (i < size)
		s += ft_strlen(strs[i++]);
	if (i == 0)
		return (strjoin = null);
	s += ft_strlen(sep) * (size - 1) - 1;
	strjoin = malloc(sizeof(char) * s);
	i = 0;
	while (i < s)
		strjoin[i++] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(strjoin, strs[i]);
		if (i < size - 1)
			ft_strcat(strjoin, sep);
		i++;
	}
	return (strjoin);
}
/*
int	main(int argc, char **argv)
{
	char	sep[] = "\n";
	char	*strjoin;

	strjoin = ft_strjoin(argc - 1, argv + 1, sep);
	printf("%s", strjoin);
	free(strjoin);
	return (0);
}*/
