/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:32:40 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 15:33:16 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		if (str[l] >= 'a' && str[l] <= 'z')
		{
			str[l] = str[l] - 32;
		}
		l++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	prov[] = {"fwFFFt2h"};
	ft_strupcase(prov);
	printf("%s", prov);
}*/
