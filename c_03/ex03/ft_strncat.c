/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:28:34 by amery             #+#    #+#             */
/*   Updated: 2022/07/31 13:51:55 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0' && y < n)
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	src[] = "de la moussaca.";
	char	dest[] = "Je mange ";

	printf("%s", ft_strncat(dest, src, 3));
}*/
