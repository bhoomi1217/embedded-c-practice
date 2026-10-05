#include <stdio.h>

int main()
{
    unsigned char GPIO = 8;

    if (GPIO & (1 << 3))
    {
        printf("Bit 3 is HIGH\n");
    }
    else
    {
        printf("Bit 3 is LOW\n");
    }

    return 0;
}
