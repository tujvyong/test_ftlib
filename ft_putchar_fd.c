// #include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../libft.h"

int main()
{
	int		fd;

	if ((fd = open("./__tests__/test.txt", O_RDWR)) < 0)
		return (1);
	ft_putchar_fd('ø', fd);
	close(fd);
	return (0);
}
