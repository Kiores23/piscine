/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:20:58 by amery             #+#    #+#             */
/*   Updated: 2022/07/21 15:45:16 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (size + size_src);
	while (src[i] != '\0' && size_dest + i < size - 1)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	if (size_dest >= size)
		return (size + size_src);
	else
		return (size_dest + size_src);
}

/*int	main(void)
{
	char	src[] = "ABCD";
	char	dest[] = "1234";

	printf("%s, %s\n%i", dest, src, ft_strlcat(dest, src, 7));
}*/
