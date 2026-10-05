#include <stdio.h>

int main()
{
    int system_ok = 1;

    if (system_ok == 1)
    {
        printf("System running\n");
    }
    else
    {
        printf("Watchdog reset\n");
    }

    return 0;
}
