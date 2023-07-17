/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-frei <vde-frei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:16:45 by vde-frei          #+#    #+#             */
/*   Updated: 2023/07/17 18:46:09 by vde-frei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_params(char *params[], int params_size);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_strings(char *params[]);

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_params(argv, argc);
	return (0);
}

void	ft_print_params(char *params[], int params_size)
{
	int	i;

	i = 1;
	ft_sort_strings(params);
	while (i < params_size)
	{
		ft_putstr(params[i++]);
		ft_putstr("\n");
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}

void	ft_sort_strings(char *strings[])
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (strings[i])
	{
		j = i + 1;
		while (strings[j])
		{
			if (ft_strcmp(strings[i], strings[j]) > 0)
			{
				temp = strings[i];
				strings[i] = strings[j];
				strings[j] = temp;
			}
			j++;
		}
		i++;
	}
}
