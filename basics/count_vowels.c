#include <stdio.h>

int main()
{
    char name[] = "Embedded Systems";
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' ||
            name[i] == 'o' || name[i] == 'u' ||
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' ||
            name[i] == 'O' || name[i] == 'U')
        {
            count++;
        }
    }

    printf("Vowels = %d", count);

    return 0;
}
