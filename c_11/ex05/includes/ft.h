/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:23:55 by amery             #+#    #+#             */
/*   Updated: 2022/08/04 16:14:01 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		main(int argc, char **argv);
int		ft_add(int n1, int n2);
int		ft_sub(int n1, int n2);
int		ft_div(int n1, int n2);
int		ft_mod(int n1, int n2);
int		ft_mul(int n1, int n2);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);

#endif
