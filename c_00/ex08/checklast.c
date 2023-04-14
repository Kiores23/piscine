/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:23:20 by amery             #+#    #+#             */
/*   Updated: 2022/07/16 14:32:56 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *nb, int size)
{
	int	i;
	int	o;

	o = 0;
	i = 9 - size;
	while (i <= 8)
	{
		printf("test");

		if (o == 0 || nb[i] != 0)
			ft_putchar('0' + nb[i]);
		if (o == 0 && nb[i] == 0)
			o = 1;
		i++;
	}
	i = 9 - size;
	while (i < size && nb[8 - i] == 9 - i)
	{
		i++;
	}
	if (i < size)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	ft_recursive(int *nb, int size, int stop)
{
	int	i;
	int	stopcnd;

	stopcnd = 0;
	if (size > 1)
		nb [size - 1] = nb [size -2] + 1;
	while (nb[8] < 9 && stop == 0)
	{
		printf("test");	
		ft_print(nb, size);
		nb[8]++;
	}
	ft_print(nb, size);
	i = 9 - size;
	while (i <= 8 && stop == 0)
	{
		if (nb[size - i - 1] == 9 - i)
			stopcnd++;
		i++;
	}
	if (stopcnd == size && stop == 0)
		stop = 1;
	i = 9 - size +2;
	while (i <= size && stop == 0)
	{	
		if (nb[9 - i] == 9 - i + 2)
		{	
			if (nb[9 - i] < 9 - i + 1)
			{
				nb[9 - i]++;
			}
			nb[10 - i] = nb[9 - i] + 1;
		}
		i++;
	}
	if (stop == 0)
	{
		stop = ft_recursive(nb, size, 0);
	}
	return (stop);
}

void	ft_print_combn(int n)
{
	int	nb[9];
	int i;

	i = n;
	while (i >= 0)
	{
		nb[i - 1] = '\0';
		i--;
	}
	n = ft_recursive(nb, n, 0);
}

int main()
{
	ft_print_combn(2);
	return 0;
}
