#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;
	int	re;

	i = 0;
	re = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[re];
		tab[re] = swap;
		i++;
		re--;
	}
}
