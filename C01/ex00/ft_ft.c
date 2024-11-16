/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:41:02 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/22 15:41:27 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*#include <stdio.h>

int	main(void)
{
	int	l;

	l = 0;	
	ft_ft(&l);
	printf("%d", l);
}*/

/*#include <unistd.h>

int	main(void)
{
	int	l;
	char	dec;
	char	uni;

	l = 5;
	ft_ft(&l);
	dec = (l /10) + 48;
	uni = (l % 10) + 48;
	write(1, &dec, 1);
	write(1, &uni, 1);
}*/
