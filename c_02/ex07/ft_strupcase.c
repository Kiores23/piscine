/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:23:06 by amery             #+#    #+#             */
/*   Updated: 2022/07/18 17:39:08 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_char_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "ABCDEFGHIJKLMNYZabcdefghijkxyz/?>.<,^%*()#@!}{| ";

	printf("%s", ft_strupcase(str));
}*/
