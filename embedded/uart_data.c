#include <stdio.h>

int main()
{
    char tx_data = 'A';
    char rx_data;

    rx_data = tx_data;

    printf("Transmitted = %c\n", tx_data);
    printf("Received = %c\n", rx_data);

    return 0;
}
