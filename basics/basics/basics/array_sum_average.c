#include <stdio.h>

int main()
{
    int arr[] = {12, 45, 7, 89, 23};
    int n=5;
    int average;
    int sum=0;
    for(int i=0; i<n; i++){
    sum=sum+arr[i];
    }
    average= sum/n;
        printf("sum is=%d\n",sum);
        printf("the average is=%d\n", average);
    
    return 0;
}
