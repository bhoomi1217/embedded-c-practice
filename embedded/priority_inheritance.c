#include <stdio.h>

int main()
{
    int low_task_priority = 2;
    int high_task_priority = 5;

    // Priority inheritance
    low_task_priority = high_task_priority;

    printf("Low task priority = %d\n", low_task_priority);

    return 0;
}
