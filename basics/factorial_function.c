#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}
