#include <stdio.h>

int main()
{
    int num= 256;
    int rev=0;
    int r;
    while(num!=0){
        r= num%10;
       rev=(rev*10)+r;
    num=num/10;
    }
    printf("%d",rev);

    return 0;
}
