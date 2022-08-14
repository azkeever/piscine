#include <stdio.h>

 char	*ft_strupcase(char *str);

 int	main(void)
 {
	 char	alpha[] = "234AHelloWorld";

	 printf("old string: %s\n", alpha);
	 ft_strupcase(alpha);
	 printf("new string: %s\n", alpha);
}
