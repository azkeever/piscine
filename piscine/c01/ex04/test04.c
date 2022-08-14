# include <stdio.h>

void ft_ultimate_div_mod(int *a, int *);

int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 2;
	printf("a: %i, b: %i\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %i, b: %i\n", a, b); 
}

