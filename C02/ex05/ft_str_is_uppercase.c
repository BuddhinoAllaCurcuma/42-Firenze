/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:19:27 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 14:20:36 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	l;

	l = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[l] != '\0')
	{
		if (str[l] < 'A' || str[l] > 'Z')
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
	printf("%d\n", ft_str_is_uppercase("GRQWJ"));
	printf("%d\n", ft_str_is_uppercase("YgTTdsr"));
	printf("%d\n", ft_str_is_uppercase("GER4GH"));
	printf("%d\n", ft_str_is_uppercase(""));
}*/
