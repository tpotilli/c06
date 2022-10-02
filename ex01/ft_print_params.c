/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:23:17 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/29 07:51:22 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
	int cpt;

	cpt = 1;
	while (cpt != argc)
	{
		while (argv[cpt][i])
		{
			write (1, &argv[cpt][i], 1);
			i++;
		}
		cpt++;
		i = 0;
		write (1, "\n", 1);
	}
    return (0);
}