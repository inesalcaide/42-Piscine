/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:06:34 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/30 12:38:35 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	validate_base(char *base, int len_base);
int	ft_atoi(char *str, char *base, int len_base);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_invert_str(char *str, int count)
{
	int		i;
	char	tmp;

	i = 0;
	while (i <= (count + 1) / 2)
	{
		tmp = str[i];
		str[i] = str[count];
		str[count] = tmp;
		i++;
		count--;
	}
	return (str);
}

char	*return_str(int nbr, char *base, int len_base)
{
	auto unsigned int n;
	auto char c, sign;
	auto char *str = (char *) malloc(34 * sizeof(char));
	auto int count = 0;
	if (nbr < 0)
	{
		sign = '-';
		n = nbr * (-1);
	}
	else
		n = nbr;
	while (n > 0)
	{
		c = base[n % len_base];
		*str++ = c;
		n /= len_base;
		count++;
	}
	if (sign == '-')
	{
		*str++ = sign;
		count++;
	}
	*str = '\0';
	return (ft_invert_str(str - count, count - 1));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	result;
	int	len_base_from;
	int	len_base_to;

	len_base_from = ft_strlen(base_from);
	len_base_to = ft_strlen(base_to);
	if (validate_base(base_from, len_base_from)
		&& validate_base(base_to, len_base_to))
	{
		result = ft_atoi(nbr, base_from, len_base_from);
		return (return_str(result, base_to, len_base_to));
	}
	return (0);
}
/*

int main()
{
    char *str_test = malloc(34);
    char *n = "-42";
    char *base_from = "0123456789";
    char *base_to = "01";

    str_test = ft_convert_base(n, base_from, base_to);
    printf("str_test: %s\n", str_test);
    free(str_test);
}*/
