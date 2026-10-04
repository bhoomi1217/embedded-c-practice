#include <stdio.h>

int main()
{
    int name[5] = {12,45,89,9,25};
     int target;

    printf("enter the number=:");
    scanf("%d",&target);

    for(int i=0; i<5;i++){

        if(name[i]==target){

            printf("the number is=%d\n the index is=%d\n",target,i);
        }
    }

    return 0;

}
