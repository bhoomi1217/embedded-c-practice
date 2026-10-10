#include <stdio.h>

int main() {
    
int readings[6] = {12, 7, 24, 31, 18, 9};
    int even=0;
    int odd=0;

    for(int i=0;i<6;i++){

        if(readings[i]%2==0){

           even++;
        }
        else{

           odd++;
        }
    }
   
     printf("Even Reading:%d\n",even);
     printf("Odd Reading:%d\n",odd);

    return 0;
}
