#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n=5;

    ptr = malloc(5 * sizeof(int));

    printf("enter the five integer value:");
    scanf("%d %d %d %d %d",
      &ptr[0], &ptr[1], &ptr[2], &ptr[3], &ptr[4]);
    


  for(int i=0;i<n;i++){
      printf("%d\n",ptr[i]);
  } 
    free(ptr);
    return 0;
}
