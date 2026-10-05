#include <stdio.h>

int main()
{
    int task1_ready = 1;
    int task2_ready = 1;

    if(task1_ready == 1 && task2_ready == 1)
    {
        printf("Scheduler selects higher priority task");
    }
    else
    {
        printf("Waiting for ready task");
    }

    return 0;
}
