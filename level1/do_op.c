#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc == 4)
    {
        if (argv[2][0] == '+')
            printf( "%d", (atoi(argv[1]) + atoi(argv[3])));
        else if (argv[2][0] == '-')
            printf( "%d", (atoi(argv[1])- atoi(argv[3])));
        else if (argv[2][0] == '*')
            printf( "%d", (atoi(argv[1]) * atoi(argv[3])));
        else if (argv[2][0] == '/')
            printf( "%d", (atoi(argv[1]) / atoi(argv[3])));
        else if (argv[2][0] == '%')
            printf( "%d", (atoi(argv[1]) % atoi(argv[3])));
        else
            printf("0");
    }
    write(1, "\n", 1);
}