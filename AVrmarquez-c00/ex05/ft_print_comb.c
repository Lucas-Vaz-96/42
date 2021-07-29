#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	vet[3];

	vet[0] = '0' - 1;
	while (++vet[0] <= '9')
	{
		vet[1] = vet[0];
		while (++vet[1] <= '9')
		{
			vet[2] = vet[1];
			while (++vet[2] <= '9')
			{
				ft_putchar(vet[0]);
				ft_putchar(vet[1]);
				ft_putchar(vet[2]);
				if (vet[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	write(1, "\n", 1);
}
