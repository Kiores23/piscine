/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 01:06:32 by amery             #+#    #+#             */
/*   Updated: 2022/07/31 18:10:06 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	char	*strcp;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	strcp = malloc(sizeof(char) * i);
	i = -1;
	while (str[++i] != '\0')
		strcp[i] = str[i];
	strcp[i] = '\0';
	return (strcp);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Super ca marche !!!";
	char	*strcp;

	strcp = ft_strdup(str);
	printf("%s", strcp);
	free(strcp);
}*/
