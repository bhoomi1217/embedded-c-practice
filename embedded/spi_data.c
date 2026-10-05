#include <stdio.h>

int main()
{
    char mosi_data = 'A';
    char miso_data;

    miso_data = mosi_data;

    printf("mosi_data= %c\n", mosi_data);
    printf("miso_data = %c\n", miso_data);
    

    return 0;
}
