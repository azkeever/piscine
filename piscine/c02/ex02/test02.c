#include <stdio.h>

 int	ft_str_is_alpha(char *str);

 int	main(void)
 {
	 int na;
	 int a;
	 char	*notalpha;
	 char	*alpha;

	 notalpha = "Hello World";
	 alpha = "HelloWorld";

	 a = ft_str_is_alpha(alpha);
	 na = ft_str_is_alpha(notalpha);
	 printf("This string is alpha: %s, see? [ %i ]\n", alpha, a);
	 printf("This string is alpha: %s, see? [ %i ]\n", notalpha, na);
}
