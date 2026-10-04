#include <stdio.h>

int main()
{
    int name[5] = {12,15,6,9,5};
     int even = 0;
    int odd = 0;
    
   for(int i = 0; i <5 ; i++)
    {
        if(name[i]%2==0)
        {
         even++;        
    }
        else {
            odd++;
        }
    }
printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    return 0;

}
