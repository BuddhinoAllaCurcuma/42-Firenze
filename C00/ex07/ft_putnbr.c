/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:21:33 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/21 12:21:37 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	digit;

	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

/*int	main(void)
{
	ft_putnbr(-1234);
	write(1, "\n", 1);
}*/

/*int	main(int argc, char **argv)
{
	ft_putnbr(argv[1]);
	write(1, "\n", 1);
}*/