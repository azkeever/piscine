int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	if (size <= i)
		return (size + ft_strlen(src));
	// need extra parenthesis below? 
	while (src[j] && i + j < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(src) + i);
}
