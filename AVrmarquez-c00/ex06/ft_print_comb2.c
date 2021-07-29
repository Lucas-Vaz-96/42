#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	vet[2];

	vet[0] = 0 - 1;
	while (++vet[0] < 100)
	{
		vet[1] = vet[0];
		while (++vet[1] < 100)
		{
			ft_putchar(vet[0] / 10 + '0');
			ft_putchar(vet[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(vet[1] / 10 + '0');
			ft_putchar(vet[1] % 10 + '0');
			if ((vet[0] / 10 != 9) || (vet[0] % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
