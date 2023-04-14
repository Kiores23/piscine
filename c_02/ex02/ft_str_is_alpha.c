/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:13:36 by amery             #+#    #+#             */
/*   Updated: 2022/07/17 17:39:10 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "CaOsPl000";
	
	printf("%i", ft_str_is_alpha(str));
	return (0);
}*/
