/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:14:43 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 12:15:31 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	l;

	l = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[l] != '\0')
	{
		if (!(str[l] >= '0' && str[l] <= '9'))
		{
			return (0);
		}
		l++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_numeric("7hs"));
	printf("%d", ft_str_is_numeric("6455"));
	printf("%d", ft_str_is_numeric(""));
}*/
