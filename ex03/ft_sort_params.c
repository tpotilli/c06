/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:39:26 by tpotilli          #+#    #+#             */
/*   Updated: 2022/10/02 08:55:09 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (0);
}

int ft_swap(char **a, char **b)
{
    char *c;
    c = *a;
    *a = *b;
    *b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == s2[i])
            i++;
		else if (s1[i] > s2[i] || s1[i] < s2[i])
            return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
    j = 0;
    while (i < argc - 1)
    {
       j = i +1;
       while (j < argc)
       {
            if (ft_strcmp(argv[i], argv[j]) > 0)
                ft_swap (&argv[i], &argv[j]);
            j++;
       }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        ft_putstr(argv[i]);
        write(1, "\n", 1);
        i++;
    }
}