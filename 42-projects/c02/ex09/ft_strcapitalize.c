/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialcaide <ialcaide@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 12:04:23 by ialcaide          #+#    #+#             */
/*   Updated: 2024/01/15 12:10:37 by ialcaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capitalize;

	i = 0;
	capitalize = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122 && capitalize)
		{
			str[i] = str[i] - 32;
			capitalize = 0;
		}
		else if (str[i] >= 65 && str[i] <= 90 && capitalize == 0)
			str[i] = str[i] + 32;
		else if (str[i] < 48 || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || str[i] > 122)
			capitalize = 1;
		else
			capitalize = 0;
		i++;
	}
	return (str);
}
