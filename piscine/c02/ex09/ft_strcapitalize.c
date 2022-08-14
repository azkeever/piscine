char	*ft_strcapitalize(char *str)
 {
	 int	i;

	 i = 0;
	 while (str[i])
	 {
		if (!(str[i-1] >= 'A' && str[i] <= 'Z' || str[i-1] >= 'a' && str[i-1] <= 'z'))
			;
		else if (!(str[i-1] >= ' ' && str[i] <= 'Z' || str[i-1] >= '/'))
			;
		else if (!(str[i-1] >= '(' && str[i] <= '~'))
			;
		else
			str[i] = 'a';
		i++;
	 }
	 return (str);
 }
