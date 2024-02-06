/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:53:02 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/30 12:41:32 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	ft_strslen(char **strs, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcpy(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str2[i])
	{
		*str1 = str2[i];
		str1++;
		i++;
	}
	return (str1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	auto char *str;
	auto int total_len, sep_len, i;
	if (size == 0)
	{
		str = malloc(1);
		*str = 0;
		return (str);
	}
	sep_len = ft_strlen(sep);
	total_len = (ft_strslen(strs, size) + (sep_len * (size - 1)));
	str = malloc(total_len + 1);
	i = 0;
	if (!str)
		return (0);
	while (i < size)
	{
		str = ft_strcpy(str, strs[i]);
		if (i < size - 1)
		{
			str = ft_strcpy(str, sep);
		}
		i++;
	}
	*str = '\0';
	return (str - total_len);
}
/*
#include <stdio.h>
int	main(void)
{
	int	size = 3;
	char	**strs;
	
	strs[0] = "1234";
	strs[1] = "abcd";
	strs[2] = "0987";

	char *sep = "__";
	printf("\"%s\"", ft_strjoin(size, strs, sep));
	//free(strs_test);
	return (0);
}*/
