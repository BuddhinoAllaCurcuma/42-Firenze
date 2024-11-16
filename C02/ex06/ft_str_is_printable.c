/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_printable.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:41:53 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 14:43:11 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	l;

	l = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[l] != '\0')
	{
		while (str[l] < 32 || str[l] == 127)
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
	
	printf("%d", ft_is_printable("mwlrgnq;"));
	printf("%d", ft_is_printable(""));
}*/
