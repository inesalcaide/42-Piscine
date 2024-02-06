/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:59:37 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/12 12:05:19 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	begin;
	int	last;
	int	tmp;

	begin = 0;
	last = size - 1;
	while (begin < last)
	{
		tmp = tab[begin];
		tab[begin] = tab[last];
		tab[last] = tmp;
		begin++;
		last--;
	}
}
