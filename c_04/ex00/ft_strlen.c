/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:54:50 by amery             #+#    #+#             */
/*   Updated: 2022/07/15 11:21:43 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

/*int	main(void)
{
	int	size;
	char	str[] = "Tu doutes encore de mon code ?? :/";

	size = ft_strlen(str);
	printf("strsize = %i", size);
	return (0);
}*/
