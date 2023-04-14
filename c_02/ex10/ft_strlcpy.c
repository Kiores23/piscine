/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 20:55:27 by amery             #+#    #+#             */
/*   Updated: 2022/08/02 18:57:08 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while (src[i] && size > 0 && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[result])
	{
		result++;
	}
	return (result);
}

/*int	main(void)
{
	char	src[] = "Test du progamme";
	char	dest[] = "CheckCheck";
	
	printf("%u\n", ft_strlcpy(dest, src, 20));
	return (0);
}*/
