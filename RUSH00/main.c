#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rush(int x, int y);

int	main(void)
{
	rush(0, 0);
	return (0);
}

void	linha0(int x, int a, int b, int c)
{
	int	i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while (i <= (x - 3))
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1 && x >= 1)
		linha0(x, 'A', 'B', 'C');
	while (i < y - 2 && x >= 1)
	{
		linha0(x, 'B', ' ', 'B');
		i++;
	}
	if (y >= 2 && x >= 1)
	{
		linha0(x, 'A', 'B', 'C');
	}
}
