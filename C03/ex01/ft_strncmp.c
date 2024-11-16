/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:51:03 by lemarino          #+#    #+#             */
/*   Updated: 2024/10/29 15:52:25 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>

int	main()
{
	int		e;
	char	the[] = {"You like me now?o"};
	char	heavy[] = {"You like me now?"};

	e = 5;
	printf("%d.", ft_strncmp(the, heavy, e));
}*/

/*#include <unistd.h>

int	main (int argc, char **argv)
{
	int	j;

	j = 1;
	while (j < argc)
	{
		write(1, argv[j], sizeof(argv[j]));
		j++;
	}
	return (0);
}*/
