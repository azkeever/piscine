# include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int	i;

	str = "Hello World";
	i = (ft_strlen(str));
	printf("string: %s, length: %i", str, i);
}

