/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:52:26 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/24 21:53:38 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	l;

	l = 0;
	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	capa[] = {"Il secondo album e' sempre il piu' difficile."};
	char	rezza[] = {};

	ft_strcpy(rezza, capa);
	printf("Primo album: %s\n", capa);
	printf("Secondo album: %s\n", rezza);
}*/
