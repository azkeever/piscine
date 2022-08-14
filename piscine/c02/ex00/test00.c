#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "testing";;
	char	dst[] = "x";

	printf("Beginning//\nsrc :%s, dst :%s\n", src, dst);
	ft_strcpy(dst, src);
	printf("End//\nsrc:%s, dst: %s\n", src, dst);
	return (0);
}

