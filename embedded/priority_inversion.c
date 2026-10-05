#include <stdio.h>

int main()
{
    int low_task_has_resource = 1;
    int high_task_waiting = 1;

    if (low_task_has_resource == 1 && high_task_waiting == 1)
    {
        printf("Priority inversion detected\n");
    }
    else
    {
        printf("No priority inversion\n");
    }

    return 0;
}
