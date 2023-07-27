#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i;
    unsigned char bit;

    i = 8;
    bit = 0;
    while (i > 0)
    {
        bit = (bit * 2) + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return (bit);
}