#include <stdio.h>

 int	ft_str_is_lowercase(char *str);

 int	main(void)
 {
	 int na;
	 int a;
	 char	*notalpha;
	 char	*alpha;

	 notalpha = "Hello World";
	 alpha = "elloorl";

	 a = ft_str_is_lowercase(alpha);
	 na = ft_str_is_lowercase(notalpha);
	 printf("This string is lowercase: %s, see? [ %i ]\n", alpha, a);
	 printf("This string is not lowercase: %s, see? [ %i ]\n", notalpha, na);
}
