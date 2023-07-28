#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0, sign = 1, num = 0;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            num = (num * str_base) + str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            num = (num * str_base) + str[i] - 'A' + 10;
        else if (str[i] >= '0' && str[i] <= '9')
            num = (num * str_base) + str[i] - '0';
        i++;
    }
    return (num * sign);
}

#include<stdio.h>
int	main(void)
{
	printf("%d" , ft_atoi_base("31", 16));

}
