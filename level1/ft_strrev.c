#include <unistd.h>

char    *ft_strrev(char *str)
{
    int i=0;
    int len=0;
    char tmp;

    while (str[len])
        len++;
    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return (str);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
    char    *str1 = "Hello";
    char    str2[] = "World";

    printf("%s" ,ft_strrev(str2));
    //printf("%p\n" ,str1); // pointer
    //printf("%p\n" ,&str2); // pointer
    //printf("%p\n" ,"Hello"); // address Hello
    //printf("%p\n" ,"World");

     //str = "World"; //
     //printf("%s\n" ,str); // pointer
     //printf("%p\n" ,str); // pointer
    // str[0] = 'c';
     //printf("str[0] = %p\n" ,str[0]); // pointer
    // printf("str[0] = %p\n" ,str[0]); // pointer
}