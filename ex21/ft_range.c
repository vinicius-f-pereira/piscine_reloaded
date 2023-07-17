/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:48:18 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/17 17:38:30 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	counter;

	if (min >= max)
		return (NULL);
	numbers = (int *)malloc(sizeof(int) * (max - min));
	counter = 0;
	while (min < max)
		numbers[counter++] = min++;
	return (numbers);
}
