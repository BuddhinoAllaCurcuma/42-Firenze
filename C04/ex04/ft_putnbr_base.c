/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:11:37 by lemarino          #+#    #+#             */
/*   Updated: 2024/11/04 22:12:43 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] < 32 || str[i] > 126 || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	control(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		while (base [j])
		{
			if (base[i] == base[j])
				return (1);
			else
				j++;
		}
		i++;
	}
	if (i < 2)
		return (1);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	digit;
	int		b;
	int		c;

	c = control(base);
	if (c == 1)
		return ;
	b = ft_strlen(base);
	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= b)
	{
		ft_putnbr_base((nbr / b), base);
	}
	digit = (nbr % b) + '0';
	write(1, &digit, 1);
	write(1, "\n", 1)
}

/*int	main(void)
{
	char bas[] = "ew";
	ft_putnbr_base(-4, bas);
	write(1, "\n", 1);
}*/

int	main(int argc, char **argv)
{
	int	trash __attribute__((unused));
	int	n;

	n = ft_atoi(argv[1]);
	trash = argc;
	ft_putnbr_base(n, argv[2]);
}
