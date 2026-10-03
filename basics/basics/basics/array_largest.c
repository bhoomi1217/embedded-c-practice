#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}
