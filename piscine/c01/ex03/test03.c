# include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	
	a = 10;
	b = 2;
	div = 0;
	mod = 0;
	printf("a: %i, b: %i\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("a: %i, b: %i\ndiv: %i, mod %i", a, b, div, mod);
}

