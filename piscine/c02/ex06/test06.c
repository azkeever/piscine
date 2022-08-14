#include <stdio.h>

 int	ft_str_is_printable(char *str);

 int	main(void)
 {
	 int na;
	 int a;
	 char	*notalpha;
	 char	*alpha;

	 notalpha = "\0";
	 alpha = "HELLO";

	 a = ft_str_is_printable(alpha);
	 na = ft_str_is_printable(notalpha);
	 printf("This string is uppercase:, see? [ %i ]\n", a);
	 printf("This string is not uppercase:, see? [ %i ]\n", na);
}
