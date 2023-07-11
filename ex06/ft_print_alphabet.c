/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:54:00 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/10 22:02:48 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter++);
	}
}
//include <unistd.h>
//#include <stdio.h>
//
//int	main()
//{
//	ft_print_alphabet();
//	return (0);
//}
