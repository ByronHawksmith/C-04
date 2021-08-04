int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	int len;
	char	*str = "Test!";
	len = ft_strlen(str);
	printf("Length of s: %s, is %d", str, len);
}
*/
