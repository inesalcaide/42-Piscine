/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:26:27 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/25 09:32:08 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_atoi(char *str)
{
	int	sign;
	int	number;
	int	i;

	sign = 1;
	number = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * sign);
}
/*#include <stdlib.h>
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	char str[] = "  \n       -0a1234abc";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}*/
