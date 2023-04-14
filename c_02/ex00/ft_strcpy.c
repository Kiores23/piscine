/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 23:00:02 by amery             #+#    #+#             */
/*   Updated: 2022/07/17 16:37:06 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	return (dest);
}

/*int	main(void)
{
	char	src[] = "Test du progamme";
	char	dest[] = "CheckCheck";
	int	i = 0;
	
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
