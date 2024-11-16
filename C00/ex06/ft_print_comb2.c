/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:07:37 by lemarino          #+#    #+#             */
/*   Updated: 2024/11/04 16:07:43 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int num)
{
	char	tens;
	char	units;

	tens = (num / 10) + '0';
	units = (num % 10) + '0';
	write(1, &tens, 1);
	write(1, &units, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			print_number(i);
			write(1, " ", 1);
			print_number(j);
			if (i < 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
