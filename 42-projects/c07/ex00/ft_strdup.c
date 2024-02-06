/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:00:13 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/25 12:01:19 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = malloc(ft_strlen(src) + 1);
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = 0;
	return (new_string);
}
/*
int main()
{
    char *str = "olabbaba";

    printf("result: %s\n", ft_strdup(str));
}*/
