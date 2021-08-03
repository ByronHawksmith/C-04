int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

int	ft_sign(char *str)
{
	int	min;

	min = 2;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			min += 1;
		str++;
	}
	return (min % 2);
}

int	ft_atoi(char *str)
{
	int	result;
	int	negative;

	result = 0;
	negative = 1;
	while (ft_is_space(*str))
		str++;
	if (ft_sign(str))
		negative = -1;
	while (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * negative);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	printf("%s\n", "SPACE CHARS:");
	printf("%d\n", '\t');
	printf("%d\n", '\n');
	printf("%d\n", '\v');
	printf("%d\n", '\f');
	printf("%d\n", '\r');
	printf("%d\n", ' ');

	printf("%s\n", "ATOI:");
	if (argc == 2)
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
*/
