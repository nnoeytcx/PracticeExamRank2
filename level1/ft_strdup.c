#include <unistd.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char *res;
	int len = 0;
	int i = 0;
	while (src[len] != '\0')
		len++;
	res = malloc(sizeof(char) * (len + 1));
	while (src[i] != '\0')
	{
		res[i] = src[i];
		i++;
	}
	res[i] = src[i];
	return (res);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *str = "i know it's you";
	printf("%s\n%s", strdup(str), ft_strdup(str));
}*/