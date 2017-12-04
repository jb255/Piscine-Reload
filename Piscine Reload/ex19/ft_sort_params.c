/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavytsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:33:07 by osavytsk          #+#    #+#             */
/*   Updated: 2017/10/25 20:49:35 by osavytsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(int np, char **st)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = np - 1;
	while (j > 0)
	{
		i = 1;
		while (i < np - 1)
		{
			if (ft_strcmp(st[i], st[i + 1]) > 0)
			{
				tmp = st[i];
				st[i] = st[i + 1];
				st[i + 1] = tmp;
			}
			i++;
		}
		j--;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
		ft_sort_params(argc, argv);
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
