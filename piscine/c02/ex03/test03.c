#include <stdio.h>

 int	ft_str_is_numeric(char *str);

 int	main(void)
 {
	 int nn;
	 int n;
	 char	*notnumeric;
	 char	*numeric;

	 notnumeric = "0asdfa0";
	 numeric = "0001349";

	 n = ft_str_is_numeric(numeric);
	 nn = ft_str_is_numeric(notnumeric);
	 printf("This string is numeric: %s, see? [ %i ]\n", numeric, n);
	 printf("This string is not numeric: %s, see? [ %i ]\n", notnumeric, nn);
}
