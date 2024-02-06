/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 11:28:48 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/11 14:43:56 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void)
{
	char	digit[6] = {0};

	int	i;
	int	j;
	int	k;

	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				digit[0] = i + '0';
				digit[1] = j + '0';
				digit[2] = k + '0';
				if (i < 7 && j < 8 && k < 9)
				{
					digit[3] = ',';
					digit[4] = ' ';
				}
				write(1, &digit, 6);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb();
}
