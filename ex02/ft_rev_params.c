/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:28:39 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/30 09:33:44 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

	j = 0;
	i = 0;

	while (argv[j])
		j++;
	j--;
	while (j >= 1)
	{
		while(argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		j--;
		write(1, "\n", 1);
	}
	
    return (0);
}