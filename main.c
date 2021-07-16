#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		file;
	char	*line;
	int		counter;

	file = 1;
	counter = 2;
	if (argc >= 2)
	{
		while (counter <= argc)
		{
			fd = open(argv[file++], O_RDONLY);
			while (1)
			{
				line = get_next_line(fd);
				printf("\nCurrent fd is #%d => %s\n", fd, line);
				if (line == NULL)
					break ;
			}
			printf("\n");
			counter++;
		}
	}
	return (0);
}