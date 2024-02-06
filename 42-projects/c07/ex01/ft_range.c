/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:01:53 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/25 22:11:05 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = malloc((max - min) * sizeof(*arr));
	if (min >= max)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int main()
{

    	int min_test = 5;
	int max_test = 15;
	int index = 0;
	int *test_res;

	printf("\"%d, %d\": ", min_test, max_test);
	test_res = ft_range(min_test, max_test);
	while (index < max_test - min_test)
	{
		printf("%d ", test_res[index]);
		index++;
	}
	printf("\n");
}*/
