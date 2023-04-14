/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:59:34 by amery             #+#    #+#             */
/*   Updated: 2022/07/18 20:28:58 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[9];

	printf("%i", ft_str_is_printable(str));
	return (0);
}*/
