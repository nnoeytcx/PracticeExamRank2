#include <unistd.h>

int		max(int* tab, unsigned int len)
{
    unsigned int i;
    int num = tab[0];

    i = 0;
    if (!tab)
        return (0);
    while (i < len)
    {
        if (num < tab[i])
            num = tab[i];
        i++;
    }
    return (num);
}