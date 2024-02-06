/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:08:32 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/18 14:07:53 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

int	ft_compare_str(char *main_str, char *sub_str)
{
	int	j;

	j = 0;
	while (sub_str[j] && main_str[j])
	{
		if (main_str[j] != sub_str[j])
		{
			return (0);
		}
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		if (to_find[x] == str[i])
		{
			if (to_find[x + 1] == '\0')
				return (&str[i - x]);
			x++;
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char str1[100] = "This is 41 school! ola", str2[] = "41";
    char *result = ft_strstr(str1, str2);
    if (result)
    	printf("str1: %s str2: %s result:%s\n", str1, str2, result);
    else
    	printf("no result: %s", result);
}*/
