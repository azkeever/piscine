#include <stdio.h>

 int	ft_str_is_uppercase(char *str);

 int	main(void)
 {
	 int na;
	 int a;
	 char	*notalpha;
	 char	*alpha;

	 notalpha = "Hello World";
	 alpha = "HELLO";

	 a = ft_str_is_uppercase(alpha);
	 na = ft_str_is_uppercase(notalpha);
	 printf("This string is uppercase: %s, see? [ %i ]\n", alpha, a);
	 printf("This string is not uppercase: %s, see? [ %i ]\n", notalpha, na);
}
