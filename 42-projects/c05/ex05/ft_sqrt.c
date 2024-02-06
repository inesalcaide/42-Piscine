/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:33:15 by ialcaide          #+#    #+#             */
/*   Updated: 2024/02/01 14:53:37 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i < (unsigned int) nb)
	{
		i++;
	}
	if (i * i == (unsigned int) nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
        int     raizd;

        raizd = 2147483647;
        printf("%d", ft_sqrt(raizd));
}*/
