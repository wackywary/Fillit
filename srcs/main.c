#include "fillit.h"
#include "libft.h"
#include <stdio.h>

int		valid_or_not(int fd);

int		main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		write(1, "usage: ./fillit source_file\n", 28);
		exit(EXIT_FAILURE);
	}
	if (valid_or_not(fd = open(av[1], O_RDONLY)) != 1)
	{
		ft_putstr("Error!\n");
	}
	else
		ft_putstr("All right\n");

	return (0);
}

