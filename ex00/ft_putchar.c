#include <unistd.h>
#define STDIN 1
#define BYTENO 1
void	ft_putchar(char c)
{
	write(STDIN, &c, BYTENO);
}
