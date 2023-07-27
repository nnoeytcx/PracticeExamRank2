#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    int f;

    while (s[i])
    {
        j = 0;
        f = 0;
        while (accept[j])
        {
            if (accept[j] == s[i])
                f = 1;
            j++;
        }
        if (f == 0)
            return (i);
        i++;
    }
    return (i);
}

/*#include<string.h>
#include<stdio.h>

int main(void)
{
    printf("strspn = %lu\n" ,strspn("abc","xyz"));
    printf("ft_strspn = %lu\n" ,ft_strspn("abc","xyz"));
    printf("strspn = %lu\n" ,      strspn("aaaaabhbbbbc","ab"));
    printf("ft_strspn = %lu\n" ,ft_strspn("aaaaabhbbbbc","ab"));
}*/