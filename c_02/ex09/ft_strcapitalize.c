/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:55:39 by amery             #+#    #+#             */
/*   Updated: 2022/07/19 02:54:21 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_char_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	ft_char_is_alpha(char c)
{
	if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
		return (0);
	return (1);
}

int	ft_checklastchar(char c)
{
	if ((c >= '0' && c <= '9') || ft_char_is_alpha(c))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (ft_checklastchar(str[i - 1]))
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "SuPer, c'eSt super 42per su/per";

	printf("%s", ft_strcapitalize(str));
}*/
