#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	if (fd < 0)
		return ;
	write(fd, str, ft_strlen(str));
}
