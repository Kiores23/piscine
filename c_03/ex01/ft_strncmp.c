/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:48:33 by amery             #+#    #+#             */
/*   Updated: 2022/11/09 12:14:01 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2 [i] != '\0' && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str[] = "Salut";
	char	str2[] = "Salut";
	printf("%i", ft_strncmp(str, str2, 4));
}*/
