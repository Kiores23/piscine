/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:40:58 by amery             #+#    #+#             */
/*   Updated: 2022/07/18 17:47:45 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_char_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_uppercase(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "Ceci est UN test, 0001";

	printf("%s", ft_strlowcase(str));
}*/
