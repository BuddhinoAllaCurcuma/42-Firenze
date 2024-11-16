/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:30:28 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/22 22:30:33 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 2525151;
	y = 135145;
	ft_div_mod(x, y, &div, &mod);
	printf("%d con resto di %d.", div, mod);
}*/

/*#include <unistd.h>

int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 7;
	y = 3;
	ft_div_mod(x, y, &div, &mod);
	div += 48;
	mod += 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}*/
