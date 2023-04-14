/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:19:06 by tandre            #+#    #+#             */
/*   Updated: 2022/07/30 19:43:06 by eleleux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFF_SIZE 1024

typedef struct s_word
{
	char	*key;
	char	*value;
}			t_word;

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strncat(char *src, char *dest, int n);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	**ft_split(char *str, char *charset);
t_word	*create_words_list(char **tab_str);
char	**dict_get_tab(char	*filename);
int		print_value(char *str_key, t_word *tab);
char	**ft_char_atoi(char *nbr);
void	parse_conditions1(char **recipe, t_word *tab);

#endif
