/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:52:40 by lemarino          #+#    #+#             */
/*   Updated: 2024/11/03 22:53:51 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		while (str [i + j] == to_find[j] && str [i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		j = 0;
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "would you share your dollars with me?" ;
	char	to_find[] = "share" ;

	printf("%s\n", ft_strstr(str, to_find));
}
*/
/*int	main(int argc, char **argv)
{
	int		t;

	t = argc;
	printf("%s\n", ft_strstr(argv[1], argv[2]));
}*/
