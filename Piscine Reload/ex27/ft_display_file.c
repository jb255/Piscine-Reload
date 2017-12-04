/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osavytsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 17:09:37 by osavytsk          #+#    #+#             */
/*   Updated: 2017/10/28 19:05:34 by osavytsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFF_S 1

int	ft_disp_file(void *argv)
{
	int		fd;
	char	buff[BUFF_S + 1];
	int		ret;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (-1);
	else
	{
		while ((ret = read(fd, buff, BUFF_S)))
		{
			write(1, buff, BUFF_S);
		}
	}
	return (fd);
}

int	main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = ft_disp_file(argv[1]);
	close(fd);
	return (0);
}
