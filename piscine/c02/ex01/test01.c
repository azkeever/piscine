#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "testing";;
	char	dst[] = "x";
	int	i;

	i = 4;

	printf("Beginning//\nsrc :%s, dst :%s\n", src, dst);
	ft_strncpy(dst, src, i);
	printf("End//\nsrc:%s, dst: %s\n", src, dst);
	return (0);
}

