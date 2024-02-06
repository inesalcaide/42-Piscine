/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:18:22 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/30 12:37:51 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	validate_base(char *base, int len_base);
int	ft_recursive_power(int nb, int power);
int	find_index(char c, char *base);
int	ft_atoi(char *str, char *base, int len_base);

int	validate_base(char *base, int len_base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || len_base < 2)
		return (0);
	while (i < len_base - 1) 
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (base[i] == '+' || base[i] == '-')
		return (0);
	return (1);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	return_int(char *str, char *base, int len_base, int len_str)
{
	int	result;
	int	index;
	int	power;

	result = 0;
	while (*str)
	{
		index = find_index(*str, base);
		power = ft_recursive_power(len_base, len_str -1);
		str++;
		len_str--;
		result += index * power;
	}
	return (result);
}

int	ft_atoi(char *str, char *base, int len_base)
{
	auto int sign, number, i, j;
	sign = 1;
	number = 0;
	i = 0;
	j = 0;
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
	while (str[i + j])
	{
		j++;
	}
	number = return_int(&str[i], base, len_base, j);
	return (number * sign);
}
