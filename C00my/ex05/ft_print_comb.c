#include <unistd.h>

void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
}

void	ft_writenum(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (! (a == '7' && b == '8' && c == '9' ))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d;
	char	e;
	char	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				ft_writenum(d, e, f);
				f++;
			}
			e++;
		}
		d++;
	}
}
