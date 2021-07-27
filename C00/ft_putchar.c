#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
	{
	char	teste;

	teste = 'c';
	ft_putchar(teste);
	return (0);
}
