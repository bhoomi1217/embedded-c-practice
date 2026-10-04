#include <stdio.h>

int main()
{
    int name[5] = {12,15,6,9,5};
    int smallest =name[0];
    
   for(int i = 1; i <5 ; i++)
    {
        if(name[i]<smallest)
        {
            smallest=name[i];        
    }}

    printf("the smallest number is=%d",smallest);
    return 0;

}
