/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:06:14 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/25 10:50:44 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (nb > 1)
	{
		if (result != nb)
		{
			result *= nb;
		}
		nb -= 1;
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	printf("result: %d", ft_iterative_factorial(5));
}*/
