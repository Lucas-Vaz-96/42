#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)

{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else if (n < 0)
	{
		ft_putchar('N');
	}
}
void	ft_is_negative(int n);

int	main(void)
{
	int	u;

	u = 42;
	ft_is_negative(u);
	return (0);
}
