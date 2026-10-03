#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 7, 89, 23};
    int n = 5;
    int target;
  
    printf("enter the number from array:");
    scanf("%d",&target);
  
  for(int i=0;i<n;i++){
        if(arr[i]==target)
            printf("the number is found=%d\n the index=%d \n",arr[i],i);
         
    }
    return 0;
}
