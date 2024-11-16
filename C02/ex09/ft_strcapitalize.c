/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:54:20 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 15:55:50 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	l;

	l = 0;
	if (str[0] >= 'a' && str[l] <= 'z')
		str[0] = str[0] - 32;
	l++;
	while (str[l])
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			if (str[l - 1] < '0' || (str[l - 1] > '9'
					&& str[l - 1] < 'A') || (str[l - 1] > 'Z'
					&& str[l - 1] < 'a') || str[l - 1] > 'z')
				str[l] -= 32;
		}
		else if (str[l] >= 'A' && str[l] <= 'Z')
		{
			if (!(str[l - 1] < '0' || (str[l - 1] > '9'
						&& str[l - 1] < 'A') || (str[l - 1] > 'Z'
						&& str[l - 1] < 'a') || str[l - 1] > 'z'))
				str[l] += 32;
		}
		l++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	cap[] = {"salut, Vas ? 42mots quARante-deux; cin\tquante+et"};

	printf("Prima: %s\n", cap);
	ft_strcapitalize(cap);
	printf("Dopo: %s\n", cap);
}*/
