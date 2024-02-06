/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:21:53 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/14 12:08:44 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char character);

void	validate_char(int index_i, int index_j, int size_i, int size_j)
{
	char	character;

	if ((index_i == 0 || index_i == size_i)
		&& (index_j == 0 || index_j == size_j))
	{
		if ((index_i == 0 && index_j == 0)
			|| (index_i == size_i && index_j == size_j))
		{
			character = 'A';
		}
		else
		{
			character = 'C';
		}
	}
	else if (index_i == 0 || index_i == size_i
		|| index_j == 0 || index_j == size_j)
	{
		character = 'B';
	}
	else
	{
		character = ' ';
	}
	ft_putchar(character);
}

void	rush(int a, int b)
{
	int	i;
	int	j;

	i = 0;
	while (i < b)
	{
		j = 0;
		while (j < a)
		{
			validate_char(i, j, b - 1, a - 1);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
