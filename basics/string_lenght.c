#include <stdio.h>

int main()
{
    char name[] = "embedded";
    int count = 0;

    while (name[count] != '\0')
    {
        count++;
    }

    printf("length = %d", count);

    return 0;
}
