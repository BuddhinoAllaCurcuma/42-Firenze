/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:40:31 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/17 16:11:57 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	o;

	o = 'z' ;
	while (o >= 'a')
	{
		write (1, &o, 1);
		o--;
	}
}

//int	main(void)
//{
//	ft_print_reverse_alphabet();
//}
