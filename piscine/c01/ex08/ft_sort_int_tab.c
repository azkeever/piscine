#include <stdio.h>

void	ft_swap(int a*, int b*);

void ft_sort_int_tab(int *tab, int size)
{
	int	minimum;
	int	i;
	int	re;

	i = 0;
	minimum = tab[0];
	re = size - 1;
	while (i < size -1)
	{
		if (tab[minimum] > tab[i])
			ft_swap(&tab[minimum], &tab[i]);
		i++;
	}
}
