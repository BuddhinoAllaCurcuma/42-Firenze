/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:35:23 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/23 11:35:26 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*#include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 27;
	y = 9;
	ft_ultimate_div_mod(&x, &y);
	printf("%i con resto di %d.\n", x, y);
}*/
