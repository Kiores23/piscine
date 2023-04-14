/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:09:31 by amery             #+#    #+#             */
/*   Updated: 2022/07/31 18:09:33 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	i = 0;
	size = max - min;
	if (size > 0)
	{
		*range = malloc((max - min) * sizeof(int));
		while (min < max)
		{
			(*range)[i++] = min++;
		}
	}
	else
	{
		*range = NULL;
		size = 0;
	}
	return (size);
}
