/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:40:36 by amery             #+#    #+#             */
/*   Updated: 2022/07/18 15:09:15 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putchar_hexadecimal(char *str)
{
	unsigned int	space;
	int				i;
	char			*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		ft_putchar(hex[str[i] / 16]);
		ft_putchar(hex[str[i] % 16]);
		space++;
		if (space == 2)
		{
			ft_putchar(' ');
			space = 0;
		}
		i++;
	}
}

void	ft_putstr_hexadecimal(void *str)
{	
	unsigned int	*a;
	unsigned int	*b;
	int	i;
	int	p;
	unsigned int	pow;
	unsigned int	temp;

	a = str;
	i = 15;
	while (i >= 0)
	{
		p = 0;
		pow = 16;
		temp = 16;
		while (p < i && i > 1)
		{
			pow = pow * temp;
			p++;
		}
		b = a / pow;
		ft_putchar("0123456789abcdef"[b % 16]);
		a = a - ((b % 16) * pow);
		i--;
	}
}

void *ft_print_memory (void *addr, unsigned int size)
{
    char	*str;
	int	i;

	str = addr;
	i = 0;
	while (i <= (size / 16))
	{
        ft_putstr_hexadecimal(addr + (i * 16));
        ft_putchar(' ');
        ft_putchar(':');
        ft_putchar(' ');
        ft_putchar_hexadecimal(addr + (i * 16));
        //ft_putstr_printable(addr + (i * 16));
    	ft_putchar('\n');
		i++;
    }
    return addr;
}

int	main(void)
{
	char	str[] = "Coucou les amis c'est fou tout ce au'on peux faire avec print memory";

	ft_print_memory(str, 22);
	return (0);
}
