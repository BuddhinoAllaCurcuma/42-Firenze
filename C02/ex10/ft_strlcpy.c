/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:43:03 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/28 16:44:49 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size == 0)
		return (j);
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*#include <stdio.h>

int	main(void)
{
	int		o;
	char	capa[] = {"Il secondo album e' sempre il piu' difficile."};
	char	rezza[10] = {};

	o = ft_strlcpy(rezza, capa, sizeof(rezza));
	printf("Primo album: %s\n", capa);
	printf("Secondo album: %s\n", rezza);
	printf("Size of source string: %u\n", o);
}*/
