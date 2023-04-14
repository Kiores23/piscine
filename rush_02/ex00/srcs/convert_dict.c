/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 08:14:05 by tandre            #+#    #+#             */
/*   Updated: 2022/07/31 22:15:49 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	get_descriptor(char *dictname)
{
	int	descriptor;

	descriptor = open(dictname, O_RDONLY);
	if (descriptor == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (descriptor);
}

int	get_file_size(int descriptor)
{
	int		ret;
	int		size;
	char	buff[BUFF_SIZE];

	size = 0;
	ret = read(descriptor, buff, 1);
	if (ret == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while (ret)
	{
		buff[ret] = '\0';
		ret = read(descriptor, buff, 1);
		size ++;
	}
	return (size);
}

char	*dict_to_string(char *dictname)
{
	int		descriptor;
	int		ret;
	char	*dest;
	char	buff[BUFF_SIZE];

	descriptor = get_descriptor(dictname);
	if (descriptor == -1)
		return (0);
	dest = malloc(sizeof(char) * get_file_size(descriptor));
	close(descriptor);
	descriptor = get_descriptor(dictname);
	ret = read(descriptor, buff, 20);
	if (ret == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while (ret)
	{
		dest = ft_strncat(buff, dest, ret);
		buff[ret] = '\0';
		ret = read(descriptor, buff, 20);
	}
	close(descriptor);
	return (dest);
}

char	**dict_get_tab(char	*filename)
{
	if (get_descriptor(filename))
	{
		return (ft_split(dict_to_string(filename), "\n"));
	}
	return (NULL);
}
