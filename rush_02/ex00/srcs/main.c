/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:06:34 by tandre            #+#    #+#             */
/*   Updated: 2022/07/31 22:28:46 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	main(int argc, char **argv)
{
	char	*filename;
	t_word	*key_value_tab;
	char	**clean;

	filename = "numbers.dict";
	if (argc == 3 || argc == 2)
	{
		if (argc == 3)
			filename = argv[1];
		if (!ft_char_atoi(argv[argc - 1]))
		{
			ft_putstr("Madame, Monsieur : Error\n");
			return (1);
		}
		if (!create_words_list(dict_get_tab(filename)))
			return (0);
		key_value_tab = create_words_list(dict_get_tab(filename));
		clean = ft_char_atoi(argv[argc - 1]);
		parse_conditions1(clean, key_value_tab);
		free(key_value_tab);
		free(clean);
	}
	return (0);
}
