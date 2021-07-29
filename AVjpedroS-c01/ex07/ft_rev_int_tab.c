void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	aux;

	y = 0;
	while (y < size / 2)
	{
		aux = tab[y];
		tab[y] = tab[size - (y + 1)];
		tab[size - (y + 1)] = aux;
		y++;
	}
}

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}
