/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:48:01 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/25 09:34:27 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

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

void	write_base(int nbr, char *base, int len_base)
{
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
	{
		n = nbr;
	}
	if (n >= (unsigned int) len_base)
	{
		write_base(n / len_base, base, len_base);
	}
	write(1, &base[n % len_base], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len_base;

	len_base = ft_strlen(base);
	if (validate_base(base, len_base))
	{
		write_base(nbr, base, len_base);
	}
}
/*
int main()
{
	ft_putnbr_base(-10000000000000000000000000000000, "0123456789");
}*/
