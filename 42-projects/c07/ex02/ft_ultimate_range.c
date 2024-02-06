/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:12:55 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/27 12:22:35 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	arr = malloc ((max - min) * sizeof(*arr));
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!arr)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}
/*
#include <stdio.h>
int  main(void)
{
	int min = 5;
	int max = 15;
	int x;
	int *array;
    	int **ptr;
    	ptr = &array;
    	x = ft_ultimate_range(ptr, min, max);
    	for (int i = 0; i < x; i++)
    	{
        	printf("%d\n", array[i]);
    	}
    	free(array); // Don't forget to free the allocated memory when done
    	return 0;
}*/
