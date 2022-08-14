#include <stdio.h>

 char	*ft_strlowcase(char *str);

 int	main(void)
 {
	 char	alpha[] = "234AHelloWorld";

	 printf("old string: %s\n", alpha);
	 ft_strlowcase(alpha);
	 printf("new string: %s\n", alpha);
}
