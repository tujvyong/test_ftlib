#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../libft.h"

int main()
{
	int		fd;

	if ((fd = open("./__tests__/test.txt", O_RDWR)) < 0)
		return (1);
	ft_putnbr_fd(123456, fd);
	close(fd);
	return (0);
}
