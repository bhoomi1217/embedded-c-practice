#include <stdio.h>

int main()
{
    char name[] = "madam";
    int count = 0;
    int palindrome = 1;

    while(name[count] != '\0')
    {
        count++;
    }

    for(int i = 0; i < count / 2; i++)
    {
        if(name[i] != name[count - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if(palindrome == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
