/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:49:27 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 15:50:08 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'A' && str[l] <= 'Z')
		{
			str[l] = str[l] + 32;
		}
		l++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	prov[] = {"fwFFFt2h"};
	ft_strlowcase(prov);
	printf("%s", prov);
}*/
