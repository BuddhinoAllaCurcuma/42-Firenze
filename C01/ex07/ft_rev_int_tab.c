/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:32:27 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/23 21:32:57 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		swap = tab[end];
		tab[end] = tab[start];
		tab[start] = swap;
		start++;
		end--;
	}
}

/*#include <stdio.h>

int	main()
{
	int	bday[] = {1, 2, 3, 4, 5};
	int	l;
	int	o;
	
	l = sizeof(bday) / sizeof(bday[0]);
	o = 0;
	ft_rev_int_tab(bday, l);
	while (o != '\0')
	{
		printf("%d", bday[l]);
		o++;
	}
}*/

/*#include <unistd.h>

int	main()
{
	int	bday[] = {1, 2, 3, 4, 5};
	int	l;
	int	o;
	
	l = 0;
	o = 0;
	while (bday[l] != '\0')
	{
		l++;
	}
	return l;
	ft_rev_int_tab(bday, l);
	while (o != '\0')
	{
		write(1, &bday(o), 1);
		o++;
	}
}*/
