/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:15:36 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/07 02:10:45 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	(void)argc;
	j = 0;
	while (argv[++j])
	{
		i = 0;
		while (argv[j][i])
			ft_putchar(argv[j][i++]);
		ft_putchar('\n');
	}
	return (0);
}
