/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:35:46 by amery             #+#    #+#             */
/*   Updated: 2022/07/28 15:59:16 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		y = i + 1;
		if (base[i] == '+' || base[i] == '-'
			|| base[i] <= 31 || base[i] == 127)
			return (0);
		while (base[y] != '\0')
		{
			if (base[i] == base[y])
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

void	ft_process(long nbr, char *base, int size_base, int *nbr_result)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	while (nbr > 0)
	{
		nbr_result[i] = base[nbr % size_base];
		nbr /= size_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(nbr_result[i]);
}

void	ft_putnbr_base(int nb, char *base)
{
	int				nbr_result[50];
	unsigned int	size_base;
	int				i;
	long			nbr;

	size_base = 0;
	i = 0;
	nbr = nb;
	if (nbr == 0)
		ft_putchar(base[0]);
	while (base[size_base] != '\0')
			size_base++;
	if (ft_check_base(base))
		ft_process(nbr, base, size_base, nbr_result);
}

/*int	main(void)
{
	ft_putnbr_base(0, "012345678");
}*/
