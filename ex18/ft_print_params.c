/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:15:36 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/11 20:15:48 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int main (int argc, char *argv[])
{
	int	i;
	int j;
	(void)argc;

	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			++i;
		}
		ft_putchar('\n');
		++j;
	}
	return (0);
}
