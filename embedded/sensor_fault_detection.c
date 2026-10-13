#include <stdio.h>

int main() {

    int arr[]={25,-5,60,120,80};
   int count=0;
    for(int i=0;i<5;i++){
            if(arr[i]<0 || arr[i]>100){
            printf("THE READING IS INVALID:%d\n",arr[i]);
             count++;
        }
        else{
            printf("THE READING IS VALID:%d\n",arr[i]);
        }
          }
   printf("Total Invalid Reading:%d",count);

    return 0;
}
