/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nivicius <nivicius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:16:45 by vde-frei          #+#    #+#             */
/*   Updated: 2023/12/07 02:11:56 by nivicius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

	i = 0;
	while (strings[i++])
	{
		j = i;
		while (strings[j++])
		{
			if (ft_strcmp(strings[i], strings[j]) > 0)
			{
				temp = strings[i];
				strings[i] = strings[j];
				strings[j] = temp;
			}
		}
	}
}
