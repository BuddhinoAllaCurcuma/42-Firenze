/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:31:45 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/24 22:33:14 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	l;

	l = 0;
	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	int		o;
	char	capa[] = {"Il secondo album e` sempre il piu`difficile"};
	char	rezza[11] = {};
	
	o = 10;
	ft_strncpy(rezza, capa, o);
	printf("Primo album: %s\n", capa);
	printf("Secondo album: %s\n", rezza);
}*/
