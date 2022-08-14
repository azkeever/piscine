# include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[10];
	int	size;
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i] = i;
		printf("tab[%i] = %i\n", tab[i], tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("tab[%i] = %i\n", tab[i], tab[i]);
		i++;
	}
	return (0);	
}

