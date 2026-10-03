#include <stdio.h>

int main()
{
    int a= 10;
    int b= 20;
    int*p1 = &a;
    int*p2 = &b;
    printf("before swapping=%d %d\n", a, b);

    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    
    printf("after swapping=%d %d\n",a, b);
    

    return 0;
}
