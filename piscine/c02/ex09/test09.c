#include <stdio.h>

 char	*ft_strcapitalize(char *str);

 int	main(void)
 {
	 char	alpha[] = "234i hello w8 f0r $me ~babyAHelloWorld";

	 printf("old string: %s\n", alpha);
	 ft_strcapitalize(alpha);
	 printf("new string: %s\n", alpha);
}
