/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:20:06 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/27 22:20:47 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	l;

	l = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[l] != '\0')
	{
		if ((str[l] < 'A' || str[l] > 'Z') && (str[l] < 'a' || str[l] > 'z'))
		{
			return (0);
		}
		l++;
	}
	return (1);
}
// a-z=65-90  A-Z=97-122
/*#include <stdio.h>

int	main(void)
{
	char	art[] = {"Nehaifattiduesudue"};
	
	printf("%d\n", ft_str_is_alpha(art));
}*/
