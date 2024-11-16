/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:44:55 by lemarino          #+#    #+#             */
/*   Updated: 2024/11/03 21:45:11 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int	main(int argc, char **argv)
{
	unsigned int	n;
	int	t;
	
	t = argc;
	n = 4;
	ft_strncat(argv[1], argv[2], n);
	write (1, argv[1], ft_strlen(argv[1]));
}*/

/*#include <stdio.h>

int	main(int argc, char **argv)
{
	int	t;
	unsigned int	n;

	t = argc;
	n = 4;
	ft_strncat(argv[1], argv[2], n);
	printf("%s\n", argv[1]);
}*/
