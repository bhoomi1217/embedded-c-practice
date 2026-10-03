#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
